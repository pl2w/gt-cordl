#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsPropertyCollection)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Configuration {
class SettingsProperty;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingsPropertyCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsPropertyCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsPropertyCollection*, "System.Configuration", "SettingsPropertyCollection");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsPropertyCollection
class CORDL_TYPE SettingsPropertyCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item)) ::System::Configuration::SettingsProperty*  Item[];

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Add, addr 0xacf698c, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method Clear, addr 0xacf69c4, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0xacf69fc, size 0x38, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method CopyTo, addr 0xacf6a34, size 0x38, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xacf6a6c, size 0x38, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Configuration::SettingsPropertyCollection* New_ctor() ;

/// @brief Method OnAdd, addr 0xacf6aa4, size 0x38, virtual true, abstract: false, final false
inline void OnAdd(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method OnAddComplete, addr 0xacf6adc, size 0x38, virtual true, abstract: false, final false
inline void OnAddComplete(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method OnClear, addr 0xacf6b14, size 0x38, virtual true, abstract: false, final false
inline void OnClear() ;

/// @brief Method OnClearComplete, addr 0xacf6b4c, size 0x38, virtual true, abstract: false, final false
inline void OnClearComplete() ;

/// @brief Method OnRemove, addr 0xacf6b84, size 0x38, virtual true, abstract: false, final false
inline void OnRemove(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method OnRemoveComplete, addr 0xacf6bbc, size 0x38, virtual true, abstract: false, final false
inline void OnRemoveComplete(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method Remove, addr 0xacf6bf4, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method SetReadOnly, addr 0xacf6c2c, size 0x38, virtual false, abstract: false, final false
inline void SetReadOnly() ;

/// @brief Method .ctor, addr 0xacf6874, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xacf68ac, size 0x38, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0xacf68e4, size 0x38, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xacf691c, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsProperty* get_Item(::StringW  name) ;

/// @brief Method get_SyncRoot, addr 0xacf6954, size 0x38, virtual true, abstract: false, final true
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPropertyCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPropertyCollection(SettingsPropertyCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPropertyCollection(SettingsPropertyCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsPropertyCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
