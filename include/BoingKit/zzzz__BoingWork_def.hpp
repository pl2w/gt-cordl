#pragma once
// IWYU pragma private; include "BoingKit/BoingWork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoingWork)
namespace BoingKit {
class BoingBehavior;
}
namespace GlobalNamespace {
struct BoingWork_EffectorFlags;
}
namespace GlobalNamespace {
struct BoingWork_Output;
}
namespace GlobalNamespace {
struct BoingWork_Params;
}
namespace GlobalNamespace {
struct BoingWork_ReactorFlags;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BoingKit {
class BoingWork;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingWork*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingWork*, "BoingKit", "BoingWork");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingWork
class CORDL_TYPE BoingWork : public ::System::Object {
public:
// Declarations
using EffectorFlags = ::GlobalNamespace::BoingWork_EffectorFlags;

using Output = ::GlobalNamespace::BoingWork_Output;

using Params = ::GlobalNamespace::BoingWork_Params;

using ReactorFlags = ::GlobalNamespace::BoingWork_ReactorFlags;

/// @brief Method ComputeTranslationalResults, addr 0x5e214d8, size 0x37c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComputeTranslationalResults(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  src, ::UnityEngine::Vector3  dst, ::BoingKit::BoingBehavior*  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingWork() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingWork", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingWork(BoingWork && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingWork", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingWork(BoingWork const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingWork) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
