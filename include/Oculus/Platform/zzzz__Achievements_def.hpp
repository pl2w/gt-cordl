#pragma once
// IWYU pragma private; include "Oculus/Platform/Achievements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Achievements)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Achievements;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Achievements*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Achievements*, "Oculus.Platform", "Achievements");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Achievements
class CORDL_TYPE Achievements : public ::System::Object {
public:
// Declarations
/// @brief Method AddCount, addr 0xa546f24, size 0x18c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* AddCount(::StringW  name, uint64_t  count) ;

/// @brief Method AddFields, addr 0xa5470b0, size 0x18c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* AddFields(::StringW  name, ::StringW  fields) ;

/// @brief Method GetAllDefinitions, addr 0xa54723c, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* GetAllDefinitions() ;

/// @brief Method GetAllProgress, addr 0xa5473b0, size 0x174, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetAllProgress() ;

/// @brief Method GetDefinitionsByName, addr 0xa547524, size 0x198, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* GetDefinitionsByName(::ArrayW<::StringW>  names) ;

/// @brief Method GetNextAchievementDefinitionListPage, addr 0xa5479d0, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* GetNextAchievementDefinitionListPage(::Oculus::Platform::Models::AchievementDefinitionList*  list) ;

/// @brief Method GetNextAchievementProgressListPage, addr 0xa547bcc, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetNextAchievementProgressListPage(::Oculus::Platform::Models::AchievementProgressList*  list) ;

/// @brief Method GetProgressByName, addr 0xa5476bc, size 0x198, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetProgressByName(::ArrayW<::StringW>  names) ;

/// @brief Method Unlock, addr 0xa547854, size 0x17c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* Unlock(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Achievements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Achievements(Achievements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Achievements(Achievements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Achievements) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform
