#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeforeRenderHelper)
namespace GlobalNamespace {
struct BeforeRenderHelper_OrderBlock;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
// Forward declare root types
namespace UnityEngine {
class BeforeRenderHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::BeforeRenderHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::BeforeRenderHelper*, "UnityEngine", "BeforeRenderHelper");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BeforeRenderHelper
class CORDL_TYPE BeforeRenderHelper : public ::System::Object {
public:
// Declarations
using OrderBlock = ::GlobalNamespace::BeforeRenderHelper_OrderBlock;

/// @brief Field s_OrderBlocks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OrderBlocks, put=setStaticF_s_OrderBlocks)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeforeRenderHelper_OrderBlock>*  s_OrderBlocks;

/// @brief Method GetUpdateOrder, addr 0xb57a004, size 0x10c, virtual false, abstract: false, final false
static inline int32_t GetUpdateOrder(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method Invoke, addr 0xb57a7b4, size 0x1b0, virtual false, abstract: false, final false
static inline void Invoke() ;

/// @brief Method RegisterCallback, addr 0xb57a110, size 0x380, virtual false, abstract: false, final false
static inline void RegisterCallback(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method UnregisterCallback, addr 0xb57a490, size 0x324, virtual false, abstract: false, final false
static inline void UnregisterCallback(::UnityEngine::Events::UnityAction*  callback) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeforeRenderHelper_OrderBlock>* getStaticF_s_OrderBlocks() ;

static inline void setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::GlobalNamespace::BeforeRenderHelper_OrderBlock>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeforeRenderHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeforeRenderHelper(BeforeRenderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeforeRenderHelper(BeforeRenderHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::BeforeRenderHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
