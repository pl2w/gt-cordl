#pragma once
// IWYU pragma private; include "Oculus/Interaction/Utils/FilteredTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FilteredTransform)
namespace Oculus::Interaction::Input {
template<typename TData>
class IOneEuroFilter_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Utils {
class FilteredTransform;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Utils::FilteredTransform*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Utils::FilteredTransform*, "Oculus.Interaction.Utils", "FilteredTransform");
// Dependencies Oculus.Interaction.Input.OneEuroFilterPropertyBlock, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Utils {
// Is value type: false
// CS Name: Oculus.Interaction.Utils.FilteredTransform
class CORDL_TYPE FilteredTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _filterPosition, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__filterPosition, put=__cordl_internal_set__filterPosition)) bool  _filterPosition;

/// @brief Field _filterRotation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__filterRotation, put=__cordl_internal_set__filterRotation)) bool  _filterRotation;

/// @brief Field _positionFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionFilter, put=__cordl_internal_set__positionFilter)) ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  _positionFilter;

/// @brief Field _positionFilterProperties, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__positionFilterProperties, put=__cordl_internal_set__positionFilterProperties)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  _positionFilterProperties;

/// @brief Field _rotationFilter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationFilter, put=__cordl_internal_set__rotationFilter)) ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  _rotationFilter;

/// @brief Field _rotationFilterProperties, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotationFilterProperties, put=__cordl_internal_set__rotationFilterProperties)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  _rotationFilterProperties;

/// @brief Field _sourceTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceTransform, put=__cordl_internal_set__sourceTransform)) ::UnityW<::UnityEngine::Transform>  _sourceTransform;

/// @brief Method InjectAllFilteredTransform, addr 0xa4d7f4c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllFilteredTransform(::UnityEngine::Transform*  sourceTransform) ;

/// @brief Method InjectSourceTransform, addr 0xa4d7f54, size 0x8, virtual false, abstract: false, final false
inline void InjectSourceTransform(::UnityEngine::Transform*  sourceTransform) ;

static inline ::Oculus::Interaction::Utils::FilteredTransform* New_ctor() ;

/// @brief Method Start, addr 0xa4d7bcc, size 0x3c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4d7c08, size 0x344, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__filterPosition() const;

constexpr bool& __cordl_internal_get__filterPosition() ;

constexpr bool const& __cordl_internal_get__filterRotation() const;

constexpr bool& __cordl_internal_get__filterRotation() ;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& __cordl_internal_get__positionFilter() const;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& __cordl_internal_get__positionFilter() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get__positionFilterProperties() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get__positionFilterProperties() ;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* const& __cordl_internal_get__rotationFilter() const;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*& __cordl_internal_get__rotationFilter() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get__rotationFilterProperties() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get__rotationFilterProperties() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sourceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sourceTransform() ;

constexpr void __cordl_internal_set__filterPosition(bool  value) ;

constexpr void __cordl_internal_set__filterRotation(bool  value) ;

constexpr void __cordl_internal_set__positionFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__positionFilterProperties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set__rotationFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set__rotationFilterProperties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set__sourceTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4d7f5c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilteredTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilteredTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FilteredTransform(FilteredTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilteredTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilteredTransform(FilteredTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16310};

/// [SerializeField]
/// @brief Field _sourceTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____sourceTransform;

/// [SerializeField]
/// @brief Field _filterPosition, offset: 0x28, size: 0x1, def value: None
 bool  ____filterPosition;

/// [SerializeField]
/// @brief Field _positionFilterProperties, offset: 0x2c, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ____positionFilterProperties;

/// [SerializeField]
/// @brief Field _filterRotation, offset: 0x38, size: 0x1, def value: None
 bool  ____filterRotation;

/// [SerializeField]
/// @brief Field _rotationFilterProperties, offset: 0x3c, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ____rotationFilterProperties;

/// @brief Field _positionFilter, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  ____positionFilter;

/// @brief Field _rotationFilter, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  ____rotationFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____sourceTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____filterPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____positionFilterProperties) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____filterRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____rotationFilterProperties) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____positionFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Utils::FilteredTransform, ____rotationFilter) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Utils::FilteredTransform) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Utils
