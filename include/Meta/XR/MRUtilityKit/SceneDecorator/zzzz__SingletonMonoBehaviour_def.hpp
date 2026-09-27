#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SingletonMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SingletonMonoBehaviour)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SingletonMonoBehaviour_InstantiationSettings;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SingletonMonoBehaviour;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SingletonMonoBehaviour_InstantiationSettings;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour*);
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour*, "Meta.XR.MRUtilityKit.SceneDecorator", "SingletonMonoBehaviour");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings*, "Meta.XR.MRUtilityKit.SceneDecorator", "SingletonMonoBehaviour/InstantiationSettings");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour
class CORDL_TYPE SingletonMonoBehaviour : public ::System::Object {
public:
// Declarations
using InstantiationSettings = ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingletonMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingletonMonoBehaviour(SingletonMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingletonMonoBehaviour(SingletonMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
// Dependencies System.Attribute
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour/InstantiationSettings
class CORDL_TYPE SingletonMonoBehaviour_InstantiationSettings : public ::System::Attribute {
public:
// Declarations
/// @brief Field dontDestroyOnLoad, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnLoad, put=__cordl_internal_set_dontDestroyOnLoad)) bool  dontDestroyOnLoad;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_dontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_dontDestroyOnLoad() ;

constexpr void __cordl_internal_set_dontDestroyOnLoad(bool  value) ;

/// @brief Method .ctor, addr 0x9f54508, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingletonMonoBehaviour_InstantiationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour_InstantiationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingletonMonoBehaviour_InstantiationSettings(SingletonMonoBehaviour_InstantiationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingletonMonoBehaviour_InstantiationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingletonMonoBehaviour_InstantiationSettings(SingletonMonoBehaviour_InstantiationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25965};

/// @brief Field dontDestroyOnLoad, offset: 0x10, size: 0x1, def value: None
 bool  ___dontDestroyOnLoad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings, ___dontDestroyOnLoad) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_InstantiationSettings) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
