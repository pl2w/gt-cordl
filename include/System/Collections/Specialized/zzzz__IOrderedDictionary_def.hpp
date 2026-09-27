#pragma once
// IWYU pragma private; include "System/Collections/Specialized/IOrderedDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IOrderedDictionary)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class IOrderedDictionary;
}
// Write type traits
MARK_REF_T(::System::Collections::Specialized::IOrderedDictionary*);
DEFINE_IL2CPP_CLASS(::System::Collections::Specialized::IOrderedDictionary*, "System.Collections.Specialized", "IOrderedDictionary");
// [DefaultMember("Item")]
// Dependencies 
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.IOrderedDictionary
class CORDL_TYPE IOrderedDictionary {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Insert(int32_t  index, ::System::Object*  key, ::System::Object*  value) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Item(int32_t  index, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IOrderedDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOrderedDictionary(IOrderedDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
