#pragma once
// IWYU pragma private; include "System/Net/BindIPEndPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindIPEndPoint)
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ServicePoint;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class BindIPEndPoint;
}
// Write type traits
MARK_REF_T(::System::Net::BindIPEndPoint*);
DEFINE_IL2CPP_CLASS(::System::Net::BindIPEndPoint*, "System.Net", "BindIPEndPoint");
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.BindIPEndPoint
class CORDL_TYPE BindIPEndPoint : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8b9e0, size 0x64, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::ServicePoint*  servicePoint, ::System::Net::IPEndPoint*  remoteEndPoint, int32_t  retryCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac8ba44, size 0xc, virtual true, abstract: false, final false
inline ::System::Net::IPEndPoint* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac8b9cc, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint*  servicePoint, ::System::Net::IPEndPoint*  remoteEndPoint, int32_t  retryCount) ;

static inline ::System::Net::BindIPEndPoint* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8b8c0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindIPEndPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindIPEndPoint(BindIPEndPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindIPEndPoint(BindIPEndPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::BindIPEndPoint) == 0x80, "Size mismatch!");

} // namespace end def System::Net
