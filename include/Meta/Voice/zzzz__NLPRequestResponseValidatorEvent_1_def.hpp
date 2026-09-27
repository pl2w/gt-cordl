#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestResponseValidatorEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
CORDL_MODULE_EXPORT(NLPRequestResponseValidatorEvent_1)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TResponseData>
class NLPRequestResponseValidatorEvent_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequestResponseValidatorEvent_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequestResponseValidatorEvent_1, "Meta.Voice", "NLPRequestResponseValidatorEvent`1");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::Voice {
// cpp template
template<typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequestResponseValidatorEvent`1<TResponseData>
class CORDL_TYPE NLPRequestResponseValidatorEvent_1 : public ::UnityEngine::Events::UnityEvent_2<TResponseData,::System::Text::StringBuilder*> {
public:
// Declarations
static inline ::Meta::Voice::NLPRequestResponseValidatorEvent_1<TResponseData>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequestResponseValidatorEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestResponseValidatorEvent_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequestResponseValidatorEvent_1(NLPRequestResponseValidatorEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestResponseValidatorEvent_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequestResponseValidatorEvent_1(NLPRequestResponseValidatorEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
