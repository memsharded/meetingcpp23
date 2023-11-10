from conan import ConanFile
from conan.tools.cmake import cmake_layout


class PoseEstimationRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps"

    def requirements(self):
        self.requires("tensorflow-lite/2.12.0")
        self.requires("opencv/4.5.5")

    def layout(self):
        cmake_layout(self)
