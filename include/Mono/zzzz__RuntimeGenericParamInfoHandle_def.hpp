#pragma once
// IWYU pragma private; include "Mono/RuntimeGenericParamInfoHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGenericParamInfoHandle)
namespace GlobalNamespace {
struct RuntimeStructs_GenericParamInfo;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Mono {
struct RuntimeGenericParamInfoHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGenericParamInfoHandle);
DEFINE_IL2CPP_CLASS(::Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
// Dependencies 
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeGenericParamInfoHandle
struct CORDL_TYPE RuntimeGenericParamInfoHandle {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::Reflection::GenericParameterAttributes  Attributes;

 __declspec(property(get=get_Constraints)) ::ArrayW<::System::Type*>  Constraints;

/// @brief Method GetConstraints, addr 0xa10e244, size 0x12c, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> GetConstraints() ;

/// @brief Method GetConstraintsCount, addr 0xa10e388, size 0x40, virtual false, abstract: false, final false
inline int32_t GetConstraintsCount() ;

/// @brief Method .ctor, addr 0xa10e220, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr) ;

/// @brief Method get_Attributes, addr 0xa10e370, size 0x18, virtual false, abstract: false, final false
inline ::System::Reflection::GenericParameterAttributes get_Attributes() ;

/// @brief Method get_Constraints, addr 0xa10e240, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> get_Constraints() ;

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeGenericParamInfoHandle() ;

// Ctor Parameters [CppParam { name: "value", ty: "::GlobalNamespace::RuntimeStructs_GenericParamInfo*", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeGenericParamInfoHandle(::GlobalNamespace::RuntimeStructs_GenericParamInfo*  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::RuntimeStructs_GenericParamInfo*  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeGenericParamInfoHandle, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mono::RuntimeGenericParamInfoHandle) == 0x8, "Size mismatch!");

} // namespace end def Mono
