#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRFilterList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IXRFilterList_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
template<typename T>
class IXRFilterList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRFilterList`1");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRFilterList`1<T>
class CORDL_TYPE IXRFilterList_1 {
public:
// Declarations
 __declspec(property(get=get_count)) int32_t  count;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

/// @brief Method GetAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetAll(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T GetAt(int32_t  index) ;

/// @brief Method MoveTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MoveTo(T  item, int32_t  newIndex) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Remove(T  item) ;

/// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_count() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRFilterList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRFilterList_1(IXRFilterList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11546};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
