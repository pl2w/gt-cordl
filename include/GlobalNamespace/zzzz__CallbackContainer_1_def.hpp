#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbackContainer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__ListProcessorAbstract_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackContainer_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class CallbackContainer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CallbackContainer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CallbackContainer_1, "", "CallbackContainer`1");
// Dependencies GorillaTag.ListProcessorAbstract`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: CallbackContainer`1<T>
class CORDL_TYPE CallbackContainer_1 : public ::GorillaTag::ListProcessorAbstract_1<T> {
public:
// Declarations
static inline ::GlobalNamespace::CallbackContainer_1<T>* New_ctor() ;

static inline ::GlobalNamespace::CallbackContainer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessItem(/* [IsReadOnly] */ ::by_ref<T>  item) ;

/// @brief Method RunCallbacks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunCallbacks() ;

/// @brief Method TryRunCallbacks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TryRunCallbacks() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackContainer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackContainer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackContainer_1(CallbackContainer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackContainer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackContainer_1(CallbackContainer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3476};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
