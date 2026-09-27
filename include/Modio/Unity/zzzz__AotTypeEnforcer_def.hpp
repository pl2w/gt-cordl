#pragma once
// IWYU pragma private; include "Modio/Unity/AotTypeEnforcer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AotTypeEnforcer)
// Forward declare root types
namespace Modio::Unity {
class AotTypeEnforcer;
}
// Write type traits
MARK_REF_T(::Modio::Unity::AotTypeEnforcer*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::AotTypeEnforcer*, "Modio.Unity", "AotTypeEnforcer");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.AotTypeEnforcer
class CORDL_TYPE AotTypeEnforcer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x9f8fb08, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::AotTypeEnforcer* New_ctor() ;

/// @brief Method .ctor, addr 0x9f8fb10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AotTypeEnforcer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AotTypeEnforcer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AotTypeEnforcer(AotTypeEnforcer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AotTypeEnforcer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AotTypeEnforcer(AotTypeEnforcer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::AotTypeEnforcer) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity
