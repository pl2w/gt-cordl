#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyModeSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_CastData_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_DescriptionStyle_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ContinuousPropertyModeSO)
namespace GlobalNamespace {
struct ContinuousPropertyModeSO_CastData;
}
namespace GlobalNamespace {
struct ContinuousPropertyModeSO_DescriptionStyle;
}
namespace GlobalNamespace {
struct ContinuousProperty_Cast;
}
namespace GlobalNamespace {
struct ContinuousProperty_DataFlags;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyModeSO___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ContinuousPropertyModeSO;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyModeSO___c;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*);
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*, "GorillaTag.Cosmetics", "ContinuousPropertyModeSO");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*, "GorillaTag.Cosmetics", "ContinuousPropertyModeSO/<>c");
// Dependencies GorillaTag.Cosmetics.ContinuousProperty::DataFlags, GorillaTag.Cosmetics.ContinuousProperty::Type, GorillaTag.Cosmetics.ContinuousPropertyModeSO::CastData, GorillaTag.Cosmetics.ContinuousPropertyModeSO::DescriptionStyle, UnityEngine.ScriptableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyModeSO
class CORDL_TYPE ContinuousPropertyModeSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using CastData = ::GlobalNamespace::ContinuousPropertyModeSO_CastData;

using DescriptionStyle = ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle;

using __c = ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c;

 __declspec(property(get=get_GetTestDescription)) ::StringW  GetTestDescription;

/// @brief Field afterSentence, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_afterSentence, put=__cordl_internal_set_afterSentence)) ::StringW  afterSentence;

/// @brief Field castData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_castData, put=__cordl_internal_set_castData)) ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>  castData;

/// @brief Field descriptionStyle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_descriptionStyle, put=__cordl_internal_set_descriptionStyle)) ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle  descriptionStyle;

/// @brief Field flags, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::GlobalNamespace::ContinuousProperty_DataFlags  flags;

/// @brief Field replaceDescription, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_replaceDescription, put=__cordl_internal_set_replaceDescription)) ::StringW  replaceDescription;

/// @brief Field type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::ContinuousProperty_Type  type;

/// @brief Method GetClosestCast, addr 0x5d835cc, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_Cast GetClosestCast(::GlobalNamespace::ContinuousProperty_Cast  cast) ;

/// @brief Method GetDescriptionForCast, addr 0x5d81be0, size 0x5f8, virtual false, abstract: false, final false
inline ::StringW GetDescriptionForCast(::GlobalNamespace::ContinuousProperty_Cast  cast) ;

/// @brief Method GetFlagsForCast, addr 0x5d83644, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_DataFlags GetFlagsForCast(::GlobalNamespace::ContinuousProperty_Cast  cast) ;

/// @brief Method GetFlagsForClosestCast, addr 0x5d82920, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_DataFlags GetFlagsForClosestCast(::GlobalNamespace::ContinuousProperty_Cast  cast) ;

/// @brief Method IsCastValid, addr 0x5d8279c, size 0x84, virtual false, abstract: false, final false
inline bool IsCastValid(::GlobalNamespace::ContinuousProperty_Cast  cast) ;

/// @brief Method ListValidCasts, addr 0x5d823fc, size 0x170, virtual false, abstract: false, final false
inline ::StringW ListValidCasts() ;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_afterSentence() const;

constexpr ::StringW& __cordl_internal_get_afterSentence() ;

constexpr ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData> const& __cordl_internal_get_castData() const;

constexpr ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>& __cordl_internal_get_castData() ;

constexpr ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle const& __cordl_internal_get_descriptionStyle() const;

constexpr ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle& __cordl_internal_get_descriptionStyle() ;

constexpr ::GlobalNamespace::ContinuousProperty_DataFlags const& __cordl_internal_get_flags() const;

constexpr ::GlobalNamespace::ContinuousProperty_DataFlags& __cordl_internal_get_flags() ;

constexpr ::StringW const& __cordl_internal_get_replaceDescription() const;

constexpr ::StringW& __cordl_internal_get_replaceDescription() ;

constexpr ::GlobalNamespace::ContinuousProperty_Type const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::ContinuousProperty_Type& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_afterSentence(::StringW  value) ;

constexpr void __cordl_internal_set_castData(::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>  value) ;

constexpr void __cordl_internal_set_descriptionStyle(::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle  value) ;

constexpr void __cordl_internal_set_flags(::GlobalNamespace::ContinuousProperty_DataFlags  value) ;

constexpr void __cordl_internal_set_replaceDescription(::StringW  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::ContinuousProperty_Type  value) ;

/// @brief Method .ctor, addr 0x5d853d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GetTestDescription, addr 0x5d85334, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_GetTestDescription() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyModeSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyModeSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousPropertyModeSO(ContinuousPropertyModeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyModeSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousPropertyModeSO(ContinuousPropertyModeSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4895};

/// @brief Field type, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_Type  ___type;

/// @brief Field flags, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_DataFlags  ___flags;

/// @brief Field castData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ContinuousPropertyModeSO_CastData>  ___castData;

/// [Space]
/// @brief Field descriptionStyle, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousPropertyModeSO_DescriptionStyle  ___descriptionStyle;

/// [TextArea]
/// @brief Field afterSentence, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___afterSentence;

/// [TextArea]
/// @brief Field replaceDescription, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___replaceDescription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___flags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___castData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___descriptionStyle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___afterSentence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO, ___replaceDescription) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyModeSO/<>c
class CORDL_TYPE ContinuousPropertyModeSO___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*  __9__15_0;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c* New_ctor() ;

/// @brief Method <ListValidCasts>b__15_0, addr 0x5d85448, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousProperty_Cast _ListValidCasts_b__15_0(::GlobalNamespace::ContinuousPropertyModeSO_CastData  x) ;

/// @brief Method .ctor, addr 0x5d85440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>* getStaticF___9__15_0() ;

static inline void setStaticF___9(::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c*  value) ;

static inline void setStaticF___9__15_0(::System::Func_2<::GlobalNamespace::ContinuousPropertyModeSO_CastData,::GlobalNamespace::ContinuousProperty_Cast>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyModeSO___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyModeSO___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousPropertyModeSO___c(ContinuousPropertyModeSO___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyModeSO___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousPropertyModeSO___c(ContinuousPropertyModeSO___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousPropertyModeSO___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
