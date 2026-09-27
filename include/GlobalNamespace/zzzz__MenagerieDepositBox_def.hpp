#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieDepositBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenagerieDepositBox)
namespace GlobalNamespace {
class MenagerieCritter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MenagerieDepositBox;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenagerieDepositBox*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenagerieDepositBox*, "", "MenagerieDepositBox");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenagerieDepositBox
class CORDL_TYPE MenagerieDepositBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnCritterInserted, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCritterInserted, put=__cordl_internal_set_OnCritterInserted)) ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  OnCritterInserted;

static inline ::GlobalNamespace::MenagerieDepositBox* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x56fc888, size 0x144, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x56fc9cc, size 0x138, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& __cordl_internal_get_OnCritterInserted() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& __cordl_internal_get_OnCritterInserted() ;

constexpr void __cordl_internal_set_OnCritterInserted(::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value) ;

/// @brief Method .ctor, addr 0x56fcb04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenagerieDepositBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenagerieDepositBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenagerieDepositBox(MenagerieDepositBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenagerieDepositBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenagerieDepositBox(MenagerieDepositBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{139};

/// @brief Field OnCritterInserted, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  ___OnCritterInserted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenagerieDepositBox, ___OnCritterInserted) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenagerieDepositBox) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
