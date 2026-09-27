#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCustomFace_RetargetingType_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_FaceExpression_def.hpp"
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace)
namespace GlobalNamespace {
struct OVRCustomFace_RetargetingType;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCustomFace;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRCustomFace*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRCustomFace*, "", "OVRCustomFace");
// [RequireComponent(typeof(UnityEngine.SkinnedMeshRenderer))]
// [HelpURL("https://developer.oculus.com/documentation/unity/move-face-tracking/")]
// [Feature((Meta.XR.Util.Feature)3)]
// Dependencies OVRCustomFace::RetargetingType, OVRFace, OVRFaceExpressions::FaceExpression
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCustomFace
class CORDL_TYPE OVRCustomFace : public ::GlobalNamespace::OVRFace {
public:
// Declarations
using RetargetingType = ::GlobalNamespace::OVRCustomFace_RetargetingType;

 __declspec(property(get=get_AllowDuplicateMapping, put=set_AllowDuplicateMapping)) bool  AllowDuplicateMapping;

 __declspec(property(get=get_Mappings, put=set_Mappings)) ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>  Mappings;

 __declspec(property(get=get_RetargetingValue, put=set_RetargetingValue)) ::GlobalNamespace::OVRCustomFace_RetargetingType  RetargetingValue;

/// @brief Field _allowDuplicateMapping, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowDuplicateMapping, put=__cordl_internal_set__allowDuplicateMapping)) bool  _allowDuplicateMapping;

/// @brief Field _mappings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__mappings, put=__cordl_internal_set__mappings)) ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>  _mappings;

/// @brief Field retargetingType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_retargetingType, put=__cordl_internal_set_retargetingType)) ::GlobalNamespace::OVRCustomFace_RetargetingType  retargetingType;

/// @brief Method GetCustomBlendShapeNameAndExpressionPairs, addr 0xa55d18c, size 0x118, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<::ArrayW<::StringW>,::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>> GetCustomBlendShapeNameAndExpressionPairs() ;

/// @brief Method GetFaceExpression, addr 0xa55d15c, size 0x30, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GetFaceExpression(int32_t  blendShapeIndex) ;

static inline ::GlobalNamespace::OVRCustomFace* New_ctor() ;

/// @brief Method Start, addr 0xa55d0c0, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__allowDuplicateMapping() const;

constexpr bool& __cordl_internal_get__allowDuplicateMapping() ;

constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> const& __cordl_internal_get__mappings() const;

constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>& __cordl_internal_get__mappings() ;

constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType const& __cordl_internal_get_retargetingType() const;

constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType& __cordl_internal_get_retargetingType() ;

constexpr void __cordl_internal_set__allowDuplicateMapping(bool  value) ;

constexpr void __cordl_internal_set__mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>  value) ;

constexpr void __cordl_internal_set_retargetingType(::GlobalNamespace::OVRCustomFace_RetargetingType  value) ;

/// @brief Method .ctor, addr 0xa55d2a4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowDuplicateMapping, addr 0xa55d0b0, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowDuplicateMapping() ;

/// @brief Method get_Mappings, addr 0xa55d090, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> get_Mappings() ;

/// @brief Method get_RetargetingValue, addr 0xa55d0a0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRCustomFace_RetargetingType get_RetargetingValue() ;

/// @brief Method set_AllowDuplicateMapping, addr 0xa55d0b8, size 0x8, virtual false, abstract: false, final false
inline void set_AllowDuplicateMapping(bool  value) ;

/// @brief Method set_Mappings, addr 0xa55d098, size 0x8, virtual false, abstract: false, final false
inline void set_Mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>  value) ;

/// @brief Method set_RetargetingValue, addr 0xa55d0a8, size 0x8, virtual false, abstract: false, final false
inline void set_RetargetingValue(::GlobalNamespace::OVRCustomFace_RetargetingType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCustomFace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCustomFace(OVRCustomFace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCustomFace(OVRCustomFace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11791};

/// [SerializeField]
/// [Tooltip("The mapping between Face Expressions to the blend shapes available on the shared mesh of the skinned mesh renderer")]
/// @brief Field _mappings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>  ____mappings;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field retargetingType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::OVRCustomFace_RetargetingType  ___retargetingType;

/// [SerializeField]
/// [Tooltip("Allow duplicates when mapping blend shapes to Face Expressions")]
/// @brief Field _allowDuplicateMapping, offset: 0x54, size: 0x1, def value: None
 bool  ____allowDuplicateMapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____mappings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ___retargetingType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____allowDuplicateMapping) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRCustomFace) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
