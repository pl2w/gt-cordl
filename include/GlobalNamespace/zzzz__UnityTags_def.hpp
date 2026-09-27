#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityTags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityTags)
namespace GlobalNamespace {
struct UnityTag;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityTags;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityTags*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTags*, "", "UnityTags");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityTags
class CORDL_TYPE UnityTags : public ::System::Object {
public:
// Declarations
/// @brief Field StringToTag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringToTag, put=setStaticF_StringToTag)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*  StringToTag;

/// @brief Field StringValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringValues, put=setStaticF_StringValues)) ::ArrayW<::StringW>  StringValues;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>* getStaticF_StringToTag() ;

static inline ::ArrayW<::StringW> getStaticF_StringValues() ;

static inline void setStaticF_StringToTag(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UnityTag>*  value) ;

static inline void setStaticF_StringValues(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTags(UnityTags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTags(UnityTags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{947};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityTags) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
