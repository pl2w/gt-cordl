#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/BindableVariable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_def.hpp"
CORDL_MODULE_EXPORT(BindableVariable_1)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1, "Unity.XR.CoreUtils.Bindings.Variables", "BindableVariable`1");
// Dependencies Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<T>
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<T>
class CORDL_TYPE BindableVariable_1 : public ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>* New_ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized) ;

/// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ValueEquals(T  other) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindableVariable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindableVariable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindableVariable_1(BindableVariable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindableVariable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindableVariable_1(BindableVariable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Bindings::Variables
