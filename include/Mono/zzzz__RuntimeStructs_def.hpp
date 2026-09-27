#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeStructs)
namespace GlobalNamespace {
struct RuntimeStructs_GPtrArray;
}
namespace GlobalNamespace {
struct RuntimeStructs_GenericParamInfo;
}
namespace GlobalNamespace {
struct RuntimeStructs_MonoClass;
}
namespace GlobalNamespace {
struct RuntimeStructs_RemoteClass;
}
// Forward declare root types
namespace Mono {
class RuntimeStructs;
}
// Write type traits
MARK_REF_T(::Mono::RuntimeStructs*);
DEFINE_IL2CPP_CLASS(::Mono::RuntimeStructs*, "Mono", "RuntimeStructs");
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.RuntimeStructs
class CORDL_TYPE RuntimeStructs : public ::System::Object {
public:
// Declarations
using GPtrArray = ::GlobalNamespace::RuntimeStructs_GPtrArray;

using GenericParamInfo = ::GlobalNamespace::RuntimeStructs_GenericParamInfo;

using MonoClass = ::GlobalNamespace::RuntimeStructs_MonoClass;

using RemoteClass = ::GlobalNamespace::RuntimeStructs_RemoteClass;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeStructs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeStructs(RuntimeStructs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeStructs(RuntimeStructs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::RuntimeStructs) == 0x10, "Size mismatch!");

} // namespace end def Mono
