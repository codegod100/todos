pkgname=todos-bin
pkgver=1.1.0
pkgrel=1
pkgdesc="An implementation of the TodoMVC specification (Qt6 version)"
arch=('x86_64')
url="https://github.com/codegod100/todos"
license=('unknown')
depends=('qt6-base' 'qt6-declarative')
provides=('todos')
conflicts=('todos')
source=("todos-${pkgver}::https://github.com/codegod100/todos/releases/download/v${pkgver}/todos-arch-qt6-bin")
sha256sums=('1bf4bb544371735d07d2afa5a328564b2167ef08b02523af1c45c900546291e6')

package() {
    install -Dm755 "${srcdir}/todos-${pkgver}" "${pkgdir}/usr/bin/todos"
}
