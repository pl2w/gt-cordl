#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Error)
// Forward declare root types
namespace GlobalNamespace {
struct Interop_Error;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Interop_Error);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_Error, "", "Interop/Error");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Error
struct CORDL_TYPE Interop_Error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Interop_Error_Unwrapped
enum struct __Interop_Error_Unwrapped : int32_t {
__E_SUCCESS = static_cast<int32_t>(0x0),
__E_E2BIG = static_cast<int32_t>(0x10001),
__E_EACCES = static_cast<int32_t>(0x10002),
__E_EADDRINUSE = static_cast<int32_t>(0x10003),
__E_EADDRNOTAVAIL = static_cast<int32_t>(0x10004),
__E_EAFNOSUPPORT = static_cast<int32_t>(0x10005),
__E_EAGAIN = static_cast<int32_t>(0x10006),
__E_EALREADY = static_cast<int32_t>(0x10007),
__E_EBADF = static_cast<int32_t>(0x10008),
__E_EBADMSG = static_cast<int32_t>(0x10009),
__E_EBUSY = static_cast<int32_t>(0x1000a),
__E_ECANCELED = static_cast<int32_t>(0x1000b),
__E_ECHILD = static_cast<int32_t>(0x1000c),
__E_ECONNABORTED = static_cast<int32_t>(0x1000d),
__E_ECONNREFUSED = static_cast<int32_t>(0x1000e),
__E_ECONNRESET = static_cast<int32_t>(0x1000f),
__E_EDEADLK = static_cast<int32_t>(0x10010),
__E_EDESTADDRREQ = static_cast<int32_t>(0x10011),
__E_EDOM = static_cast<int32_t>(0x10012),
__E_EDQUOT = static_cast<int32_t>(0x10013),
__E_EEXIST = static_cast<int32_t>(0x10014),
__E_EFAULT = static_cast<int32_t>(0x10015),
__E_EFBIG = static_cast<int32_t>(0x10016),
__E_EHOSTUNREACH = static_cast<int32_t>(0x10017),
__E_EIDRM = static_cast<int32_t>(0x10018),
__E_EILSEQ = static_cast<int32_t>(0x10019),
__E_EINPROGRESS = static_cast<int32_t>(0x1001a),
__E_EINTR = static_cast<int32_t>(0x1001b),
__E_EINVAL = static_cast<int32_t>(0x1001c),
__E_EIO = static_cast<int32_t>(0x1001d),
__E_EISCONN = static_cast<int32_t>(0x1001e),
__E_EISDIR = static_cast<int32_t>(0x1001f),
__E_ELOOP = static_cast<int32_t>(0x10020),
__E_EMFILE = static_cast<int32_t>(0x10021),
__E_EMLINK = static_cast<int32_t>(0x10022),
__E_EMSGSIZE = static_cast<int32_t>(0x10023),
__E_EMULTIHOP = static_cast<int32_t>(0x10024),
__E_ENAMETOOLONG = static_cast<int32_t>(0x10025),
__E_ENETDOWN = static_cast<int32_t>(0x10026),
__E_ENETRESET = static_cast<int32_t>(0x10027),
__E_ENETUNREACH = static_cast<int32_t>(0x10028),
__E_ENFILE = static_cast<int32_t>(0x10029),
__E_ENOBUFS = static_cast<int32_t>(0x1002a),
__E_ENODEV = static_cast<int32_t>(0x1002c),
__E_ENOENT = static_cast<int32_t>(0x1002d),
__E_ENOEXEC = static_cast<int32_t>(0x1002e),
__E_ENOLCK = static_cast<int32_t>(0x1002f),
__E_ENOLINK = static_cast<int32_t>(0x10030),
__E_ENOMEM = static_cast<int32_t>(0x10031),
__E_ENOMSG = static_cast<int32_t>(0x10032),
__E_ENOPROTOOPT = static_cast<int32_t>(0x10033),
__E_ENOSPC = static_cast<int32_t>(0x10034),
__E_ENOSYS = static_cast<int32_t>(0x10037),
__E_ENOTCONN = static_cast<int32_t>(0x10038),
__E_ENOTDIR = static_cast<int32_t>(0x10039),
__E_ENOTEMPTY = static_cast<int32_t>(0x1003a),
__E_ENOTSOCK = static_cast<int32_t>(0x1003c),
__E_ENOTSUP = static_cast<int32_t>(0x1003d),
__E_ENOTTY = static_cast<int32_t>(0x1003e),
__E_ENXIO = static_cast<int32_t>(0x1003f),
__E_EOVERFLOW = static_cast<int32_t>(0x10040),
__E_EPERM = static_cast<int32_t>(0x10042),
__E_EPIPE = static_cast<int32_t>(0x10043),
__E_EPROTO = static_cast<int32_t>(0x10044),
__E_EPROTONOSUPPORT = static_cast<int32_t>(0x10045),
__E_EPROTOTYPE = static_cast<int32_t>(0x10046),
__E_ERANGE = static_cast<int32_t>(0x10047),
__E_EROFS = static_cast<int32_t>(0x10048),
__E_ESPIPE = static_cast<int32_t>(0x10049),
__E_ESRCH = static_cast<int32_t>(0x1004a),
__E_ESTALE = static_cast<int32_t>(0x1004b),
__E_ETIMEDOUT = static_cast<int32_t>(0x1004d),
__E_ETXTBSY = static_cast<int32_t>(0x1004e),
__E_EXDEV = static_cast<int32_t>(0x1004f),
__E_ESOCKTNOSUPPORT = static_cast<int32_t>(0x1005e),
__E_EPFNOSUPPORT = static_cast<int32_t>(0x10060),
__E_ESHUTDOWN = static_cast<int32_t>(0x1006c),
__E_EHOSTDOWN = static_cast<int32_t>(0x10070),
__E_ENODATA = static_cast<int32_t>(0x10071),
__E_EOPNOTSUPP = static_cast<int32_t>(0x1003d),
__E_EWOULDBLOCK = static_cast<int32_t>(0x10006),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Interop_Error_Unwrapped () const noexcept {
return static_cast<__Interop_Error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Interop_Error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Interop_Error(int32_t  value__) noexcept;

/// @brief Field SUCCESS value: I32(0)
static ::GlobalNamespace::Interop_Error const SUCCESS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field E2BIG value: I32(65537)
static ::GlobalNamespace::Interop_Error const _cordl_E2BIG;

/// @brief Field EACCES value: I32(65538)
static ::GlobalNamespace::Interop_Error const _cordl_EACCES;

/// @brief Field EADDRINUSE value: I32(65539)
static ::GlobalNamespace::Interop_Error const _cordl_EADDRINUSE;

/// @brief Field EADDRNOTAVAIL value: I32(65540)
static ::GlobalNamespace::Interop_Error const _cordl_EADDRNOTAVAIL;

/// @brief Field EAFNOSUPPORT value: I32(65541)
static ::GlobalNamespace::Interop_Error const _cordl_EAFNOSUPPORT;

/// @brief Field EAGAIN value: I32(65542)
static ::GlobalNamespace::Interop_Error const _cordl_EAGAIN;

/// @brief Field EALREADY value: I32(65543)
static ::GlobalNamespace::Interop_Error const _cordl_EALREADY;

/// @brief Field EBADF value: I32(65544)
static ::GlobalNamespace::Interop_Error const _cordl_EBADF;

/// @brief Field EBADMSG value: I32(65545)
static ::GlobalNamespace::Interop_Error const _cordl_EBADMSG;

/// @brief Field EBUSY value: I32(65546)
static ::GlobalNamespace::Interop_Error const _cordl_EBUSY;

/// @brief Field ECANCELED value: I32(65547)
static ::GlobalNamespace::Interop_Error const _cordl_ECANCELED;

/// @brief Field ECHILD value: I32(65548)
static ::GlobalNamespace::Interop_Error const _cordl_ECHILD;

/// @brief Field ECONNABORTED value: I32(65549)
static ::GlobalNamespace::Interop_Error const _cordl_ECONNABORTED;

/// @brief Field ECONNREFUSED value: I32(65550)
static ::GlobalNamespace::Interop_Error const _cordl_ECONNREFUSED;

/// @brief Field ECONNRESET value: I32(65551)
static ::GlobalNamespace::Interop_Error const _cordl_ECONNRESET;

/// @brief Field EDEADLK value: I32(65552)
static ::GlobalNamespace::Interop_Error const _cordl_EDEADLK;

/// @brief Field EDESTADDRREQ value: I32(65553)
static ::GlobalNamespace::Interop_Error const _cordl_EDESTADDRREQ;

/// @brief Field EDOM value: I32(65554)
static ::GlobalNamespace::Interop_Error const _cordl_EDOM;

/// @brief Field EDQUOT value: I32(65555)
static ::GlobalNamespace::Interop_Error const _cordl_EDQUOT;

/// @brief Field EEXIST value: I32(65556)
static ::GlobalNamespace::Interop_Error const _cordl_EEXIST;

/// @brief Field EFAULT value: I32(65557)
static ::GlobalNamespace::Interop_Error const _cordl_EFAULT;

/// @brief Field EFBIG value: I32(65558)
static ::GlobalNamespace::Interop_Error const _cordl_EFBIG;

/// @brief Field EHOSTDOWN value: I32(65648)
static ::GlobalNamespace::Interop_Error const _cordl_EHOSTDOWN;

/// @brief Field EHOSTUNREACH value: I32(65559)
static ::GlobalNamespace::Interop_Error const _cordl_EHOSTUNREACH;

/// @brief Field EIDRM value: I32(65560)
static ::GlobalNamespace::Interop_Error const _cordl_EIDRM;

/// @brief Field EILSEQ value: I32(65561)
static ::GlobalNamespace::Interop_Error const _cordl_EILSEQ;

/// @brief Field EINPROGRESS value: I32(65562)
static ::GlobalNamespace::Interop_Error const _cordl_EINPROGRESS;

/// @brief Field EINTR value: I32(65563)
static ::GlobalNamespace::Interop_Error const _cordl_EINTR;

/// @brief Field EINVAL value: I32(65564)
static ::GlobalNamespace::Interop_Error const _cordl_EINVAL;

/// @brief Field EIO value: I32(65565)
static ::GlobalNamespace::Interop_Error const _cordl_EIO;

/// @brief Field EISCONN value: I32(65566)
static ::GlobalNamespace::Interop_Error const _cordl_EISCONN;

/// @brief Field EISDIR value: I32(65567)
static ::GlobalNamespace::Interop_Error const _cordl_EISDIR;

/// @brief Field ELOOP value: I32(65568)
static ::GlobalNamespace::Interop_Error const _cordl_ELOOP;

/// @brief Field EMFILE value: I32(65569)
static ::GlobalNamespace::Interop_Error const _cordl_EMFILE;

/// @brief Field EMLINK value: I32(65570)
static ::GlobalNamespace::Interop_Error const _cordl_EMLINK;

/// @brief Field EMSGSIZE value: I32(65571)
static ::GlobalNamespace::Interop_Error const _cordl_EMSGSIZE;

/// @brief Field EMULTIHOP value: I32(65572)
static ::GlobalNamespace::Interop_Error const _cordl_EMULTIHOP;

/// @brief Field ENAMETOOLONG value: I32(65573)
static ::GlobalNamespace::Interop_Error const _cordl_ENAMETOOLONG;

/// @brief Field ENETDOWN value: I32(65574)
static ::GlobalNamespace::Interop_Error const _cordl_ENETDOWN;

/// @brief Field ENETRESET value: I32(65575)
static ::GlobalNamespace::Interop_Error const _cordl_ENETRESET;

/// @brief Field ENETUNREACH value: I32(65576)
static ::GlobalNamespace::Interop_Error const _cordl_ENETUNREACH;

/// @brief Field ENFILE value: I32(65577)
static ::GlobalNamespace::Interop_Error const _cordl_ENFILE;

/// @brief Field ENOBUFS value: I32(65578)
static ::GlobalNamespace::Interop_Error const _cordl_ENOBUFS;

/// @brief Field ENODATA value: I32(65649)
static ::GlobalNamespace::Interop_Error const _cordl_ENODATA;

/// @brief Field ENODEV value: I32(65580)
static ::GlobalNamespace::Interop_Error const _cordl_ENODEV;

/// @brief Field ENOENT value: I32(65581)
static ::GlobalNamespace::Interop_Error const _cordl_ENOENT;

/// @brief Field ENOEXEC value: I32(65582)
static ::GlobalNamespace::Interop_Error const _cordl_ENOEXEC;

/// @brief Field ENOLCK value: I32(65583)
static ::GlobalNamespace::Interop_Error const _cordl_ENOLCK;

/// @brief Field ENOLINK value: I32(65584)
static ::GlobalNamespace::Interop_Error const _cordl_ENOLINK;

/// @brief Field ENOMEM value: I32(65585)
static ::GlobalNamespace::Interop_Error const _cordl_ENOMEM;

/// @brief Field ENOMSG value: I32(65586)
static ::GlobalNamespace::Interop_Error const _cordl_ENOMSG;

/// @brief Field ENOPROTOOPT value: I32(65587)
static ::GlobalNamespace::Interop_Error const _cordl_ENOPROTOOPT;

/// @brief Field ENOSPC value: I32(65588)
static ::GlobalNamespace::Interop_Error const _cordl_ENOSPC;

/// @brief Field ENOSYS value: I32(65591)
static ::GlobalNamespace::Interop_Error const _cordl_ENOSYS;

/// @brief Field ENOTCONN value: I32(65592)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTCONN;

/// @brief Field ENOTDIR value: I32(65593)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTDIR;

/// @brief Field ENOTEMPTY value: I32(65594)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTEMPTY;

/// @brief Field ENOTSOCK value: I32(65596)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTSOCK;

/// @brief Field ENOTSUP value: I32(65597)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTSUP;

/// @brief Field ENOTTY value: I32(65598)
static ::GlobalNamespace::Interop_Error const _cordl_ENOTTY;

/// @brief Field ENXIO value: I32(65599)
static ::GlobalNamespace::Interop_Error const _cordl_ENXIO;

/// @brief Field EOPNOTSUPP value: I32(65597)
static ::GlobalNamespace::Interop_Error const _cordl_EOPNOTSUPP;

/// @brief Field EOVERFLOW value: I32(65600)
static ::GlobalNamespace::Interop_Error const _cordl_EOVERFLOW;

/// @brief Field EPERM value: I32(65602)
static ::GlobalNamespace::Interop_Error const _cordl_EPERM;

/// @brief Field EPFNOSUPPORT value: I32(65632)
static ::GlobalNamespace::Interop_Error const _cordl_EPFNOSUPPORT;

/// @brief Field EPIPE value: I32(65603)
static ::GlobalNamespace::Interop_Error const _cordl_EPIPE;

/// @brief Field EPROTO value: I32(65604)
static ::GlobalNamespace::Interop_Error const _cordl_EPROTO;

/// @brief Field EPROTONOSUPPORT value: I32(65605)
static ::GlobalNamespace::Interop_Error const _cordl_EPROTONOSUPPORT;

/// @brief Field EPROTOTYPE value: I32(65606)
static ::GlobalNamespace::Interop_Error const _cordl_EPROTOTYPE;

/// @brief Field ERANGE value: I32(65607)
static ::GlobalNamespace::Interop_Error const _cordl_ERANGE;

/// @brief Field EROFS value: I32(65608)
static ::GlobalNamespace::Interop_Error const _cordl_EROFS;

/// @brief Field ESHUTDOWN value: I32(65644)
static ::GlobalNamespace::Interop_Error const _cordl_ESHUTDOWN;

/// @brief Field ESOCKTNOSUPPORT value: I32(65630)
static ::GlobalNamespace::Interop_Error const _cordl_ESOCKTNOSUPPORT;

/// @brief Field ESPIPE value: I32(65609)
static ::GlobalNamespace::Interop_Error const _cordl_ESPIPE;

/// @brief Field ESRCH value: I32(65610)
static ::GlobalNamespace::Interop_Error const _cordl_ESRCH;

/// @brief Field ESTALE value: I32(65611)
static ::GlobalNamespace::Interop_Error const _cordl_ESTALE;

/// @brief Field ETIMEDOUT value: I32(65613)
static ::GlobalNamespace::Interop_Error const _cordl_ETIMEDOUT;

/// @brief Field ETXTBSY value: I32(65614)
static ::GlobalNamespace::Interop_Error const _cordl_ETXTBSY;

/// @brief Field EWOULDBLOCK value: I32(65542)
static ::GlobalNamespace::Interop_Error const _cordl_EWOULDBLOCK;

/// @brief Field EXDEV value: I32(65615)
static ::GlobalNamespace::Interop_Error const _cordl_EXDEV;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_Error, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_Error) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
