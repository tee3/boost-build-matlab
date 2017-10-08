pipeline {
    agent any

    stages {
        stage('Test') {
            steps {
                sh 'cd test/test_default && bjam --verbose-test'
            }
        }
    }
}
