#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativePagedList`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePagedList`1_Enumerator)
namespace UnityEngine::UIElements::UIR {
template<typename T>
class NativePagedList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativePagedList_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativePagedList_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativePagedList_1_Enumerator, "UnityEngine.UIElements.UIR", "NativePagedList`1/Enumerator");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.NativePagedList`1/Enumerator<T>
struct CORDL_TYPE NativePagedList_1_Enumerator {
public:
// Declarations
/// @brief Method GetNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetNext() ;

/// @brief Method HasNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HasNext() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::UIR::NativePagedList_1<T>*  nativePagedList, int32_t  offset) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativePagedList_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_NativePagedList", ty: "::UnityEngine::UIElements::UIR::NativePagedList_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentPage", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexInCurrentPage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexOfCurrentPage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CountInCurrentPage", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativePagedList_1_Enumerator(::UnityEngine::UIElements::UIR::NativePagedList_1<T>*  m_NativePagedList, ::Unity::Collections::NativeArray_1<T>  m_CurrentPage, int32_t  m_IndexInCurrentPage, int32_t  m_IndexOfCurrentPage, int32_t  m_CountInCurrentPage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_NativePagedList, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::NativePagedList_1<T>*  m_NativePagedList;

/// @brief Field m_CurrentPage, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  m_CurrentPage;

/// @brief Field m_IndexInCurrentPage, offset: 0x18, size: 0x4, def value: None
 int32_t  m_IndexInCurrentPage;

/// @brief Field m_IndexOfCurrentPage, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_IndexOfCurrentPage;

/// @brief Field m_CountInCurrentPage, offset: 0x20, size: 0x4, def value: None
 int32_t  m_CountInCurrentPage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
