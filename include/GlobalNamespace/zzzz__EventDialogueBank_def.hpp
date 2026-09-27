#pragma once
// IWYU pragma private; include "GlobalNamespace/EventDialogueBank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EventDialogueBank_EventDialogueBankEntry_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDialogueBank)
namespace GlobalNamespace {
struct EventDialogueBank_EventDialogueBankEntry;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class EventDialogueBank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EventDialogueBank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventDialogueBank*, "", "EventDialogueBank");
// Dependencies EventDialogueBank::EventDialogueBankEntry, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventDialogueBank
class CORDL_TYPE EventDialogueBank : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventDialogueBankEntry = ::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry;

/// @brief Field _index, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field bank, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bank, put=__cordl_internal_set_bank)) ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>  bank;

/// @brief Field defaultAudioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultAudioSource, put=__cordl_internal_set_defaultAudioSource)) ::UnityW<::UnityEngine::AudioSource>  defaultAudioSource;

/// @brief Field index, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) float_t  index;

/// @brief Method Awake, addr 0x57048e0, size 0x134, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5704a14, size 0x26c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::EventDialogueBank* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry> const& __cordl_internal_get_bank() const;

constexpr ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>& __cordl_internal_get_bank() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_defaultAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_defaultAudioSource() ;

constexpr float_t const& __cordl_internal_get_index() const;

constexpr float_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set_bank(::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>  value) ;

constexpr void __cordl_internal_set_defaultAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_index(float_t  value) ;

/// @brief Method .ctor, addr 0x5704c80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventDialogueBank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventDialogueBank", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDialogueBank(EventDialogueBank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDialogueBank", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDialogueBank(EventDialogueBank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{157};

/// [SerializeField]
/// @brief Field bank, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EventDialogueBank_EventDialogueBankEntry>  ___bank;

/// [SerializeField]
/// @brief Field defaultAudioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___defaultAudioSource;

/// [SerializeField]
/// @brief Field index, offset: 0x30, size: 0x4, def value: None
 float_t  ___index;

/// @brief Field _index, offset: 0x34, size: 0x4, def value: None
 int32_t  ____index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventDialogueBank, ___bank) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventDialogueBank, ___defaultAudioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventDialogueBank, ___index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventDialogueBank, ____index) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventDialogueBank) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
