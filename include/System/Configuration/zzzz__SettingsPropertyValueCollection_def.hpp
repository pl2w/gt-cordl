#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyValueCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsPropertyValueCollection)
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
class SettingsPropertyValue;
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
class SettingsPropertyValueCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsPropertyValueCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsPropertyValueCollection*, "System.Configuration", "SettingsPropertyValueCollection");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsPropertyValueCollection
class CORDL_TYPE SettingsPropertyValueCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item)) ::System::Configuration::SettingsPropertyValue*  Item[];

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Add, addr 0xacf7214, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Configuration::SettingsPropertyValue*  property) ;

/// @brief Method Clear, addr 0xacf724c, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0xacf7284, size 0x38, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method CopyTo, addr 0xacf72bc, size 0x38, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xacf72f4, size 0x38, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Configuration::SettingsPropertyValueCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacf732c, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method SetReadOnly, addr 0xacf7364, size 0x38, virtual false, abstract: false, final false
inline void SetReadOnly() ;

/// @brief Method .ctor, addr 0xacf70fc, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xacf7134, size 0x38, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0xacf716c, size 0x38, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xacf71a4, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsPropertyValue* get_Item(::StringW  name) ;

/// @brief Method get_SyncRoot, addr 0xacf71dc, size 0x38, virtual true, abstract: false, final true
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
constexpr SettingsPropertyValueCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyValueCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPropertyValueCollection(SettingsPropertyValueCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyValueCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPropertyValueCollection(SettingsPropertyValueCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsPropertyValueCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
