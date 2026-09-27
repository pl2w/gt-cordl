#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Filter/HandFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandFilter)
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class HandFilterParameterBlock;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IOneEuroFilter_1;
}
namespace Oculus::Interaction::Input {
class ShadowHand;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Filter {
class HandFilter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Filter::HandFilter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Filter::HandFilter*, "Oculus.Interaction.Input.Filter", "HandFilter");
// Dependencies Oculus.Interaction.Input.Hand, Oculus.Interaction.Input.IOneEuroFilter`1<TData>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction::Input::Filter {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Filter.HandFilter
class CORDL_TYPE HandFilter : public ::Oculus::Interaction::Input::Hand {
public:
// Declarations
/// @brief Field _filterParameters, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterParameters, put=__cordl_internal_set__filterParameters)) ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>  _filterParameters;

/// @brief Field _jointPosFilter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPosFilter, put=__cordl_internal_set__jointPosFilter)) ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>  _jointPosFilter;

/// @brief Field _jointRotFilter, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointRotFilter, put=__cordl_internal_set__jointRotFilter)) ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>  _jointRotFilter;

/// @brief Field _rootPosFilter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootPosFilter, put=__cordl_internal_set__rootPosFilter)) ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  _rootPosFilter;

/// @brief Field _rootRotFilter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootRotFilter, put=__cordl_internal_set__rootRotFilter)) ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  _rootRotFilter;

/// @brief Field _shadowHand, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__shadowHand, put=__cordl_internal_set__shadowHand)) ::Oculus::Interaction::Input::ShadowHand*  _shadowHand;

/// @brief Method Apply, addr 0xa517df8, size 0x50, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  handDataAsset) ;

/// @brief Method Awake, addr 0xa517d24, size 0xd4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Input::Filter::HandFilter* New_ctor() ;

/// @brief Method UpdateFilterParameters, addr 0xa517e48, size 0x21c, virtual false, abstract: false, final false
inline bool UpdateFilterParameters() ;

/// @brief Method UpdateHandData, addr 0xa518064, size 0x528, virtual false, abstract: false, final false
inline bool UpdateHandData(::Oculus::Interaction::Input::HandDataAsset*  handDataAsset) ;

constexpr ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock> const& __cordl_internal_get__filterParameters() const;

constexpr ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>& __cordl_internal_get__filterParameters() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*> const& __cordl_internal_get__jointPosFilter() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>& __cordl_internal_get__jointPosFilter() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*> const& __cordl_internal_get__jointRotFilter() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>& __cordl_internal_get__jointRotFilter() ;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& __cordl_internal_get__rootPosFilter() const;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& __cordl_internal_get__rootPosFilter() ;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* const& __cordl_internal_get__rootRotFilter() const;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*& __cordl_internal_get__rootRotFilter() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__shadowHand() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__shadowHand() ;

constexpr void __cordl_internal_set__filterParameters(::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>  value) ;

constexpr void __cordl_internal_set__jointPosFilter(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__jointRotFilter(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>  value) ;

constexpr void __cordl_internal_set__rootPosFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__rootRotFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value) ;

/// @brief Method .ctor, addr 0xa51858c, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandFilter(HandFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandFilter(HandFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16543};

/// [Header("Settings", order = -1)]
/// [Tooltip("Applies a One Euro Filter when filter parameters are provided")]
/// [SerializeField]
/// [Optional]
/// @brief Field _filterParameters, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::HandFilterParameterBlock>  ____filterParameters;

/// @brief Field _rootRotFilter, offset: 0x88, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  ____rootRotFilter;

/// @brief Field _rootPosFilter, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  ____rootPosFilter;

/// @brief Field _jointPosFilter, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>  ____jointPosFilter;

/// @brief Field _jointRotFilter, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>  ____jointRotFilter;

/// @brief Field _shadowHand, offset: 0xa8, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____shadowHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____filterParameters) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____rootRotFilter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____rootPosFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____jointPosFilter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____jointRotFilter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Filter::HandFilter, ____shadowHand) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Filter::HandFilter) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Filter
