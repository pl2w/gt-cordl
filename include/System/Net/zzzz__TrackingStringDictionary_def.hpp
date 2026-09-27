#pragma once
// IWYU pragma private; include "System/Net/TrackingStringDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackingStringDictionary)
// Forward declare root types
namespace System::Net {
class TrackingStringDictionary;
}
// Write type traits
MARK_REF_T(::System::Net::TrackingStringDictionary*);
DEFINE_IL2CPP_CLASS(::System::Net::TrackingStringDictionary*, "System.Net", "TrackingStringDictionary");
// [DefaultMember("Item")]
// Dependencies System.Collections.Specialized.StringDictionary
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TrackingStringDictionary
class CORDL_TYPE TrackingStringDictionary : public ::System::Collections::Specialized::StringDictionary {
public:
// Declarations
 __declspec(property(get=get_IsChanged, put=set_IsChanged)) bool  IsChanged;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field _isChanged, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__isChanged, put=__cordl_internal_set__isChanged)) bool  _isChanged;

/// @brief Field _isReadOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isReadOnly, put=__cordl_internal_set__isReadOnly)) bool  _isReadOnly;

/// @brief Method Add, addr 0xadb0248, size 0x70, virtual true, abstract: false, final false
inline void Add(::StringW  key, ::StringW  value) ;

/// @brief Method Clear, addr 0xadb02b8, size 0x70, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::System::Net::TrackingStringDictionary* New_ctor() ;

static inline ::System::Net::TrackingStringDictionary* New_ctor(bool  isReadOnly) ;

/// @brief Method Remove, addr 0xadb0328, size 0x70, virtual true, abstract: false, final false
inline void Remove(::StringW  key) ;

constexpr bool const& __cordl_internal_get__isChanged() const;

constexpr bool& __cordl_internal_get__isChanged() ;

constexpr bool const& __cordl_internal_get__isReadOnly() const;

constexpr bool& __cordl_internal_get__isReadOnly() ;

constexpr void __cordl_internal_set__isChanged(bool  value) ;

constexpr void __cordl_internal_set__isReadOnly(bool  value) ;

/// @brief Method .ctor, addr 0xadb01f4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xadb0210, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  isReadOnly) ;

/// @brief Method get_IsChanged, addr 0xadb0238, size 0x8, virtual false, abstract: false, final false
inline bool get_IsChanged() ;

/// @brief Method get_Item, addr 0xadb0398, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Item(::StringW  key) ;

/// @brief Method set_IsChanged, addr 0xadb0240, size 0x8, virtual false, abstract: false, final false
inline void set_IsChanged(bool  value) ;

/// @brief Method set_Item, addr 0xadb03a0, size 0x70, virtual true, abstract: false, final false
inline void set_Item(::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackingStringDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackingStringDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackingStringDictionary(TrackingStringDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackingStringDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackingStringDictionary(TrackingStringDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10408};

/// @brief Field _isReadOnly, offset: 0x18, size: 0x1, def value: None
 bool  ____isReadOnly;

/// @brief Field _isChanged, offset: 0x19, size: 0x1, def value: None
 bool  ____isChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TrackingStringDictionary, ____isReadOnly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::TrackingStringDictionary, ____isChanged) == 0x19, "Offset mismatch!");

static_assert(sizeof(::System::Net::TrackingStringDictionary) == 0x20, "Size mismatch!");

} // namespace end def System::Net
