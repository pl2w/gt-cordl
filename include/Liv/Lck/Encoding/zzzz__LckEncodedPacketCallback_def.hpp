#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncodedPacketCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckEncodedPacketCallback)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Encoding::LckEncodedPacketCallback);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckEncodedPacketCallback, "Liv.Lck.Encoding", "LckEncodedPacketCallback");
// Dependencies System.IntPtr
namespace Liv::Lck::Encoding {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckEncodedPacketCallback
struct CORDL_TYPE LckEncodedPacketCallback {
public:
// Declarations
 __declspec(property(get=get_CallbackFunctionPtr, put=set_CallbackFunctionPtr)) ::System::IntPtr  CallbackFunctionPtr;

 __declspec(property(get=get_CallbackObjectPtr, put=set_CallbackObjectPtr)) ::System::IntPtr  CallbackObjectPtr;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method .ctor, addr 0x9d42d74, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  callbackObjectPtr, ::System::IntPtr  callbackFunctionPtr) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CallbackFunctionPtr, addr 0x9d42d44, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr get_CallbackFunctionPtr() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CallbackObjectPtr, addr 0x9d42d34, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr get_CallbackObjectPtr() ;

/// @brief Method get_IsValid, addr 0x9d42d54, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method set_CallbackFunctionPtr, addr 0x9d42d4c, size 0x8, virtual false, abstract: false, final false
inline void set_CallbackFunctionPtr(::System::IntPtr  value) ;

/// [CompilerGenerated]
/// @brief Method set_CallbackObjectPtr, addr 0x9d42d3c, size 0x8, virtual false, abstract: false, final false
inline void set_CallbackObjectPtr(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEncodedPacketCallback() ;

// Ctor Parameters [CppParam { name: "_CallbackObjectPtr_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CallbackFunctionPtr_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr LckEncodedPacketCallback(::System::IntPtr  _CallbackObjectPtr_k__BackingField, ::System::IntPtr  _CallbackFunctionPtr_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <CallbackObjectPtr>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _CallbackObjectPtr_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CallbackFunctionPtr>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _CallbackFunctionPtr_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Encoding::LckEncodedPacketCallback, _CallbackObjectPtr_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncodedPacketCallback, _CallbackFunctionPtr_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Encoding::LckEncodedPacketCallback) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
