#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/InputFeatureUsageString_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputFeatureUsageString_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename T>
class InputFeatureUsageString_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "InputFeatureUsageString`1");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.InputFeatureUsageString`1<T>
class CORDL_TYPE InputFeatureUsageString_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::InputFeatureUsageString_1<T>* New_ctor(::StringW  usageName) ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  usageName) ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method set_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputFeatureUsageString_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputFeatureUsageString_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputFeatureUsageString_1(InputFeatureUsageString_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputFeatureUsageString_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputFeatureUsageString_1(InputFeatureUsageString_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11643};

/// [SerializeField]
/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
