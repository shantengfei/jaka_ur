#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/shantengfei/catkin_ws/src/rbx2/rbx2_tasks"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/shantengfei/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/shantengfei/catkin_ws/install/lib/python2.7/dist-packages:/home/shantengfei/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/shantengfei/catkin_ws/build" \
    "/usr/bin/python" \
    "/home/shantengfei/catkin_ws/src/rbx2/rbx2_tasks/setup.py" \
    build --build-base "/home/shantengfei/catkin_ws/build/rbx2/rbx2_tasks" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/shantengfei/catkin_ws/install" --install-scripts="/home/shantengfei/catkin_ws/install/bin"
