#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureConfigList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformFeatureConfigList)
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigList;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfigList");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureConfigList
class CORDL_TYPE TransformFeatureConfigList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  Values;

/// @brief Field _values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  _values;

/// @brief Method Create, addr 0xa4a96fc, size 0x70, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* Create(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  values) ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  value) ;

/// @brief Method .ctor, addr 0xa4a976c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Values, addr 0xa4a96f4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureConfigList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureConfigList(TransformFeatureConfigList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfigList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureConfigList(TransformFeatureConfigList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16174};

/// [SerializeField]
/// @brief Field _values, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList, ____values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
