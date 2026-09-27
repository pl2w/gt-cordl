#pragma once
// IWYU pragma private; include "System/Linq/ILookup_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILookup_2)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
// Forward declare root types
namespace System::Linq {
template<typename TKey,typename TElement>
class ILookup_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Linq::ILookup_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Linq::ILookup_2, "System.Linq", "ILookup`2");
// [DefaultMember("Item")]
// Dependencies 
namespace System::Linq {
// cpp template
template<typename TKey,typename TElement>
// Is value type: false
// CS Name: System.Linq.ILookup`2<TKey,TElement>
class CORDL_TYPE ILookup_2 {
public:
// Declarations
 __declspec(property(get=get_Item)) ::System::Collections::Generic::IEnumerable_1<TElement>*  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<TElement>* get_Item(TKey  key) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILookup_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILookup_2(ILookup_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23566};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
