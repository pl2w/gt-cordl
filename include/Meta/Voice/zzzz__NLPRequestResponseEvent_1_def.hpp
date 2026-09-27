#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestResponseEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(NLPRequestResponseEvent_1)
// Forward declare root types
namespace Meta::Voice {
template<typename TResponseData>
class NLPRequestResponseEvent_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequestResponseEvent_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequestResponseEvent_1, "Meta.Voice", "NLPRequestResponseEvent`1");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::Voice {
// cpp template
template<typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequestResponseEvent`1<TResponseData>
class CORDL_TYPE NLPRequestResponseEvent_1 : public ::UnityEngine::Events::UnityEvent_1<TResponseData> {
public:
// Declarations
static inline ::Meta::Voice::NLPRequestResponseEvent_1<TResponseData>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequestResponseEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestResponseEvent_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequestResponseEvent_1(NLPRequestResponseEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequestResponseEvent_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequestResponseEvent_1(NLPRequestResponseEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
