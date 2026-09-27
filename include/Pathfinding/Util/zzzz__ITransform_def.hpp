#pragma once
// IWYU pragma private; include "Pathfinding/Util/ITransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransform)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class ITransform;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::ITransform*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::ITransform*, "Pathfinding.Util", "ITransform");
// Dependencies 
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.ITransform
class CORDL_TYPE ITransform {
public:
// Declarations
/// @brief Method InverseTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 InverseTransform(::UnityEngine::Vector3  position) ;

/// @brief Method Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 Transform(::UnityEngine::Vector3  position) ;

// Ctor Parameters [CppParam { name: "", ty: "ITransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransform(ITransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
