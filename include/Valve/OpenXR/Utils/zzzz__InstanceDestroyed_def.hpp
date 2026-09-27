#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/InstanceDestroyed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDestroyed)
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
namespace Valve::OpenXR::Utils {
class InstanceDestroyed;
}
// Write type traits
MARK_REF_T(::Valve::OpenXR::Utils::InstanceDestroyed*);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::InstanceDestroyed*, "Valve.OpenXR.Utils", "InstanceDestroyed");
// Dependencies System.MulticastDelegate
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.InstanceDestroyed
class CORDL_TYPE InstanceDestroyed : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb9426b0, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  instance, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb94270c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb94269c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint64_t  instance) ;

static inline ::Valve::OpenXR::Utils::InstanceDestroyed* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb9425fc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceDestroyed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceDestroyed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceDestroyed(InstanceDestroyed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDestroyed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceDestroyed(InstanceDestroyed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Valve::OpenXR::Utils::InstanceDestroyed) == 0x80, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
