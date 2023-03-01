# > docker-compose up --build
# > docker run --rm -it  clang-cpp

# Get the base Ubuntu image from Docker Hub
FROM ubuntu:22.10

# Update apps on the base image
RUN apt-get -y update && apt-get install -y

# Install the Clang compiler
RUN apt-get -y install clang

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
#COPY ./0.1_intro  /usr/src/dockertest1
#COPY ./4.3_objects_size  /usr/src/dockertest1

# Specify the working directory
WORKDIR /usr/src

# Use Clang to compile the Test.cpp source file
#RUN clang++ -std=c++2a -pedantic-errors -Weffc++ -Wsign-conversion -Wall -Wextra -Werror -o Main main.cpp

# Run the output program from the previous step
CMD ["/bin/bash"]