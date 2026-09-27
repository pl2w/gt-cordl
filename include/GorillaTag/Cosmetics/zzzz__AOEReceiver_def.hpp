#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AOEReceiver)
namespace GlobalNamespace {
struct AOEReceiver_AOEContext;
}
namespace GorillaTag::Cosmetics {
class AOEContextEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class AOEReceiver;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::AOEReceiver*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::AOEReceiver*, "GorillaTag.Cosmetics", "AOEReceiver");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.AOEReceiver
class CORDL_TYPE AOEReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AOEContext = ::GlobalNamespace::AOEReceiver_AOEContext;

/// @brief Field OnAOEReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAOEReceived, put=__cordl_internal_set_OnAOEReceived)) ::GorillaTag::Cosmetics::AOEContextEvent*  OnAOEReceived;

/// @brief Field enabledForAOE, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabledForAOE, put=__cordl_internal_set_enabledForAOE)) bool  enabledForAOE;

static inline ::GorillaTag::Cosmetics::AOEReceiver* New_ctor() ;

/// @brief Method ReceiveAOE, addr 0x5d6d714, size 0x78, virtual false, abstract: false, final false
inline void ReceiveAOE(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::AOEReceiver_AOEContext>  AOEContext) ;

constexpr ::GorillaTag::Cosmetics::AOEContextEvent* const& __cordl_internal_get_OnAOEReceived() const;

constexpr ::GorillaTag::Cosmetics::AOEContextEvent*& __cordl_internal_get_OnAOEReceived() ;

constexpr bool const& __cordl_internal_get_enabledForAOE() const;

constexpr bool& __cordl_internal_get_enabledForAOE() ;

constexpr void __cordl_internal_set_OnAOEReceived(::GorillaTag::Cosmetics::AOEContextEvent*  value) ;

constexpr void __cordl_internal_set_enabledForAOE(bool  value) ;

/// @brief Method .ctor, addr 0x5d6d78c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AOEReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AOEReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AOEReceiver(AOEReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AOEReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AOEReceiver(AOEReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4844};

/// @brief Field OnAOEReceived, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::AOEContextEvent*  ___OnAOEReceived;

/// [Tooltip("Quick toggle to disable receiving without disabling the GameObject.")]
/// [SerializeField]
/// @brief Field enabledForAOE, offset: 0x28, size: 0x1, def value: None
 bool  ___enabledForAOE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::AOEReceiver, ___OnAOEReceived) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOEReceiver, ___enabledForAOE) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::AOEReceiver) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
