#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/HelpUrls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HelpUrls)
// Forward declare root types
namespace Unity::AI::Navigation {
class HelpUrls;
}
// Write type traits
MARK_REF_T(::Unity::AI::Navigation::HelpUrls*);
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::HelpUrls*, "Unity.AI.Navigation", "HelpUrls");
// Dependencies System.Object
namespace Unity::AI::Navigation {
// Is value type: false
// CS Name: Unity.AI.Navigation.HelpUrls
class CORDL_TYPE HelpUrls : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpUrls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpUrls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpUrls(HelpUrls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpUrls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpUrls(HelpUrls const& ) = delete;

/// @brief Field Api offset 0xffffffff size 0x8
static constexpr ::ConstString  Api{u"https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/api/"};

/// @brief Field BaseUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  BaseUrl{u"https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0"};

/// @brief Field Manual offset 0xffffffff size 0x8
static constexpr ::ConstString  Manual{u"https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/"};

/// @brief Field Version offset 0xffffffff size 0x8
static constexpr ::ConstString  Version{u"2.0"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::AI::Navigation::HelpUrls) == 0x10, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
