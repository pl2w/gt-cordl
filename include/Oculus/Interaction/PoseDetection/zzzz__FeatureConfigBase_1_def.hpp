#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureConfigBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FeatureConfigBase_1)
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature>
class FeatureConfigBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::FeatureConfigBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::FeatureConfigBase_1, "Oculus.Interaction.PoseDetection", "FeatureConfigBase`1");
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateActiveMode, System.Object
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TFeature>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureConfigBase`1<TFeature>
class CORDL_TYPE FeatureConfigBase_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Feature, put=set_Feature)) TFeature  Feature;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  Mode;

 __declspec(property(get=get_State, put=set_State)) ::StringW  State;

/// @brief Field _feature, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__feature, put=__cordl_internal_set__feature)) TFeature  _feature;

/// @brief Field _mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  _mode;

/// @brief Field _state, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::StringW  _state;

static inline ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<TFeature>* New_ctor() ;

constexpr TFeature const& __cordl_internal_get__feature() const;

constexpr TFeature& __cordl_internal_get__feature() ;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode const& __cordl_internal_get__mode() const;

constexpr ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode& __cordl_internal_get__mode() ;

constexpr ::StringW const& __cordl_internal_get__state() const;

constexpr ::StringW& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__feature(TFeature  value) ;

constexpr void __cordl_internal_set__mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

constexpr void __cordl_internal_set__state(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Feature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TFeature get_Feature() ;

/// @brief Method get_Mode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode get_Mode() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_State() ;

/// @brief Method set_Feature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Feature(TFeature  value) ;

/// @brief Method set_Mode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Mode(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  value) ;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureConfigBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureConfigBase_1(FeatureConfigBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureConfigBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureConfigBase_1(FeatureConfigBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16100};

/// [SerializeField]
/// @brief Field _mode, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  ____mode;

/// [SerializeField]
/// @brief Field _feature, offset: 0x18, size: 0x8, def value: None
 TFeature  ____feature;

/// [SerializeField]
/// @brief Field _state, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
