#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaQuestManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaQuestManager)
// Forward declare root types
namespace GlobalNamespace {
class GorillaQuestManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaQuestManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaQuestManager*, "", "GorillaQuestManager");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaQuestManager
class CORDL_TYPE GorillaQuestManager {
public:
// Declarations
/// @brief Method ClearAllQuestEventListeners, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearAllQuestEventListeners() ;

/// @brief Method HandleQuestCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleQuestCompleted(int32_t  questID) ;

/// @brief Method HandleQuestProgressChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleQuestProgressChanged(bool  initialLoad) ;

/// @brief Method LoadQuestProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LoadQuestProgress() ;

/// @brief Method LoadQuestsFromJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LoadQuestsFromJson(::StringW  jsonString) ;

/// @brief Method SaveQuestProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SaveQuestProgress() ;

/// @brief Method SetupAllQuestEventListeners, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetupAllQuestEventListeners() ;

// Ctor Parameters [CppParam { name: "", ty: "GorillaQuestManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaQuestManager(GorillaQuestManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
