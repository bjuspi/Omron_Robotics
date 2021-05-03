from setuptools import setup

package_name = 'my_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='User',
    maintainer_email='hiverlab@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hmd_talker = my_package.hmd_publisher:main',
            'hmd_listener = my_package.hmd_subscriber:main',
            'talker = my_package.publisher:main',
            'listener_hmd = my_package.subscriber_hmd:main',
            'listener_controller1 = my_package.subscriber_controller1:main',
            'listener_controller2 = my_package.subscriber_controller2:main',
        ],
    },
)
