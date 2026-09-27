#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisemeBlendShapeLipSync)
namespace GlobalNamespace {
struct BaseVisemeBlendShapeLipSync_VisemeBlendShapeData;
}
namespace GlobalNamespace {
struct BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight;
}
namespace Meta::WitAi::TTS::Data {
struct Viseme;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class BaseVisemeBlendShapeLipSync;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync*, "Meta.WitAi.TTS.LipSync", "BaseVisemeBlendShapeLipSync");
// Dependencies Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync::VisemeBlendShapeData, UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync
class CORDL_TYPE BaseVisemeBlendShapeLipSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VisemeBlendShapeData = ::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData;

using VisemeBlendShapeWeight = ::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight;

 __declspec(property(get=get_SkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  SkinnedMeshRenderer;

/// @brief Field VisemeBlendShapes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VisemeBlendShapes, put=__cordl_internal_set_VisemeBlendShapes)) ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>  VisemeBlendShapes;

/// @brief Field _blendShapeLookup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__blendShapeLookup, put=__cordl_internal_set__blendShapeLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _blendShapeLookup;

/// @brief Field _blendShapeNames, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__blendShapeNames, put=__cordl_internal_set__blendShapeNames)) ::System::Collections::Generic::List_1<::StringW>*  _blendShapeNames;

/// @brief Field _visemeLookup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__visemeLookup, put=__cordl_internal_set__visemeLookup)) ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  _visemeLookup;

/// @brief Field blendShapeWeightScale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeWeightScale, put=__cordl_internal_set_blendShapeWeightScale)) float_t  blendShapeWeightScale;

/// @brief Method Awake, addr 0x9e52cf8, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetBlendShapeNames, addr 0x9e53418, size 0x2b4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetBlendShapeNames() ;

/// @brief Method GetBlendShapeWeight, addr 0x9e53a1c, size 0x110, virtual false, abstract: false, final false
inline float_t GetBlendShapeWeight(::Meta::WitAi::TTS::Data::Viseme  viseme, ::StringW  blendShapeName) ;

static inline ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync* New_ctor() ;

/// @brief Method OnVisemeFinished, addr 0x9e536d0, size 0x4, virtual true, abstract: false, final true
inline void OnVisemeFinished(::Meta::WitAi::TTS::Data::Viseme  viseme) ;

/// @brief Method OnVisemeLerp, addr 0x9e536d4, size 0x348, virtual true, abstract: false, final false
inline void OnVisemeLerp(::Meta::WitAi::TTS::Data::Viseme  fromEvent, ::Meta::WitAi::TTS::Data::Viseme  toEvent, float_t  percentage) ;

/// @brief Method OnVisemeStarted, addr 0x9e536cc, size 0x4, virtual true, abstract: false, final true
inline void OnVisemeStarted(::Meta::WitAi::TTS::Data::Viseme  viseme) ;

/// @brief Method RefreshBlendShapeLookup, addr 0x9e52cfc, size 0x71c, virtual false, abstract: false, final false
inline void RefreshBlendShapeLookup() ;

/// @brief Method Reset, addr 0x9e528fc, size 0x3fc, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData> const& __cordl_internal_get_VisemeBlendShapes() const;

constexpr ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>& __cordl_internal_get_VisemeBlendShapes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get__blendShapeLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get__blendShapeLookup() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__blendShapeNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__blendShapeNames() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>* const& __cordl_internal_get__visemeLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*& __cordl_internal_get__visemeLookup() ;

constexpr float_t const& __cordl_internal_get_blendShapeWeightScale() const;

constexpr float_t& __cordl_internal_get_blendShapeWeightScale() ;

constexpr void __cordl_internal_set_VisemeBlendShapes(::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>  value) ;

constexpr void __cordl_internal_set__blendShapeLookup(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set__blendShapeNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__visemeLookup(::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  value) ;

constexpr void __cordl_internal_set_blendShapeWeightScale(float_t  value) ;

/// @brief Method .ctor, addr 0x9e53b2c, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SkinnedMeshRenderer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_SkinnedMeshRenderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVisemeBlendShapeLipSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVisemeBlendShapeLipSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVisemeBlendShapeLipSync(BaseVisemeBlendShapeLipSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisemeBlendShapeLipSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVisemeBlendShapeLipSync(BaseVisemeBlendShapeLipSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29093};

/// @brief Field blendShapeWeightScale, offset: 0x20, size: 0x4, def value: None
 float_t  ___blendShapeWeightScale;

/// @brief Field VisemeBlendShapes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData>  ___VisemeBlendShapes;

/// @brief Field _visemeLookup, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  ____visemeLookup;

/// @brief Field _blendShapeLookup, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ____blendShapeLookup;

/// @brief Field _blendShapeNames, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____blendShapeNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync, ___blendShapeWeightScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync, ___VisemeBlendShapes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync, ____visemeLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync, ____blendShapeLookup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync, ____blendShapeNames) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
