# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image

# https://stackoverflow.com/questions/36075525/how-do-i-run-a-docker-instance-from-a-dockerfile
# To build a docker file:
#       docker build .
# Then get the image ID using:
#       docker image ls
# Then run the image using:
 #      docker run <image ID>

FROM gcc:latest

# These commands copy your files into the specified directory in the image
# and set that as the working location
# COPY . /usr/src/main
# WORKDIR /usr/src/main
COPY . /home/jake/toolbox/cpp_tools/foo/
WORKDIR /home/jake/toolbox/cpp_tools/foo/

# This command compiles your app using GCC, adjust for your source code
# Be sure to include ALL .cpp files called in the main
RUN g++ -o main Src/main.cpp Src/foo.cpp Src/bar.cpp Src/factorial.cpp 

# This command runs your application, comment out this line to compile only
CMD ["./main"]

LABEL Name=foo Version=0.0.1
