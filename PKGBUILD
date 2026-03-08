pkgname=todos-bin
pkgver=1.0.0
pkgrel=1
pkgdesc="An implementation of the TodoMVC specification"
arch=('x86_64')
url="https://github.com/codegod100/todos"
license=('unknown')
depends=('qt5-base' 'qt5-declarative' 'qt5-quickcontrols2')
provides=('todos')
conflicts=('todos')
source=("todos-${pkgver}::https://github.com/codegod100/todos/releases/download/v${pkgver}/todos-arch-bin")
sha256sums=('72efe7cb942698deb37e464676d73805cf2bf4aca0dc1a3d798ff6895b6947f2')

package() {
    install -Dm755 "${srcdir}/todos-${pkgver}" "${pkgdir}/usr/bin/todos"
}
