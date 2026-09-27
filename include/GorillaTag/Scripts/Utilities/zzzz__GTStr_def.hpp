#pragma once
// IWYU pragma private; include "GorillaTag/Scripts/Utilities/GTStr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTStr)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GorillaTag::Scripts::Utilities {
class GTStr;
}
// Write type traits
MARK_REF_T(::GorillaTag::Scripts::Utilities::GTStr*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Scripts::Utilities::GTStr*, "GorillaTag.Scripts.Utilities", "GTStr");
// Dependencies System.Object
namespace GorillaTag::Scripts::Utilities {
// Is value type: false
// CS Name: GorillaTag.Scripts.Utilities.GTStr
class CORDL_TYPE GTStr : public ::System::Object {
public:
// Declarations
/// @brief Method Bullet, addr 0x5d3d490, size 0x278, virtual false, abstract: false, final false
static inline ::StringW Bullet(::System::Collections::Generic::IList_1<::StringW>*  strings, ::StringW  bulletStr) ;

/// @brief Method Bullet, addr 0x5d3d2fc, size 0x194, virtual false, abstract: false, final false
static inline void Bullet(::System::Text::StringBuilder*  builder, ::System::Collections::Generic::IList_1<::StringW>*  strings, ::StringW  bulletStr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTStr() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTStr", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTStr(GTStr && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTStr", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTStr(GTStr const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Scripts::Utilities::GTStr) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Scripts::Utilities
