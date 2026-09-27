#pragma once
// IWYU pragma private; include "System/ComponentModel/WeakHashtable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WeakHashtable)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::ComponentModel {
class WeakHashtable_EqualityWeakReference;
}
namespace System::ComponentModel {
class WeakHashtable_WeakKeyComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class WeakHashtable_EqualityWeakReference;
}
namespace System::ComponentModel {
class WeakHashtable_WeakKeyComparer;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::WeakHashtable*);
MARK_REF_T(::System::ComponentModel::WeakHashtable_EqualityWeakReference*);
MARK_REF_T(::System::ComponentModel::WeakHashtable_WeakKeyComparer*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::WeakHashtable*, "System.ComponentModel", "WeakHashtable");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::WeakHashtable_EqualityWeakReference*, "System.ComponentModel", "WeakHashtable/EqualityWeakReference");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::WeakHashtable_WeakKeyComparer*, "System.ComponentModel", "WeakHashtable/WeakKeyComparer");
// Dependencies System.Collections.Hashtable
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WeakHashtable
class CORDL_TYPE WeakHashtable : public ::System::Collections::Hashtable {
public:
// Declarations
using EqualityWeakReference = ::System::ComponentModel::WeakHashtable_EqualityWeakReference;

using WeakKeyComparer = ::System::ComponentModel::WeakHashtable_WeakKeyComparer;

/// @brief Field _comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__comparer, put=setStaticF__comparer)) ::System::Collections::IEqualityComparer*  _comparer;

/// @brief Field _lastGlobalMem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastGlobalMem, put=__cordl_internal_set__lastGlobalMem)) int64_t  _lastGlobalMem;

/// @brief Field _lastHashCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHashCount, put=__cordl_internal_set__lastHashCount)) int32_t  _lastHashCount;

/// @brief Method Clear, addr 0xad98244, size 0x8, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::System::ComponentModel::WeakHashtable* New_ctor() ;

/// @brief Method Remove, addr 0xad9824c, size 0x8, virtual true, abstract: false, final false
inline void Remove(::System::Object*  key) ;

/// @brief Method ScavengeKeys, addr 0xad982d8, size 0x630, virtual false, abstract: false, final false
inline void ScavengeKeys() ;

/// @brief Method SetWeak, addr 0xad98254, size 0x84, virtual false, abstract: false, final false
inline void SetWeak(::System::Object*  key, ::System::Object*  value) ;

constexpr int64_t const& __cordl_internal_get__lastGlobalMem() const;

constexpr int64_t& __cordl_internal_get__lastGlobalMem() ;

constexpr int32_t const& __cordl_internal_get__lastHashCount() const;

constexpr int32_t& __cordl_internal_get__lastHashCount() ;

constexpr void __cordl_internal_set__lastGlobalMem(int64_t  value) ;

constexpr void __cordl_internal_set__lastHashCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xad981e0, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::IEqualityComparer* getStaticF__comparer() ;

static inline void setStaticF__comparer(::System::Collections::IEqualityComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeakHashtable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WeakHashtable(WeakHashtable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeakHashtable(WeakHashtable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10306};

/// @brief Field _lastGlobalMem, offset: 0x50, size: 0x8, def value: None
 int64_t  ____lastGlobalMem;

/// @brief Field _lastHashCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ____lastHashCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::WeakHashtable, ____lastGlobalMem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::WeakHashtable, ____lastHashCount) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::WeakHashtable) == 0x60, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.WeakReference
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WeakHashtable/EqualityWeakReference
class CORDL_TYPE WeakHashtable_EqualityWeakReference : public ::System::WeakReference {
public:
// Declarations
/// @brief Field _hashCode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__hashCode, put=__cordl_internal_set__hashCode)) int32_t  _hashCode;

/// @brief Method Equals, addr 0xad98b48, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0xad98bcc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::WeakHashtable_EqualityWeakReference* New_ctor(::System::Object*  o) ;

constexpr int32_t const& __cordl_internal_get__hashCode() const;

constexpr int32_t& __cordl_internal_get__hashCode() ;

constexpr void __cordl_internal_set__hashCode(int32_t  value) ;

/// @brief Method .ctor, addr 0xad98908, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeakHashtable_EqualityWeakReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_EqualityWeakReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WeakHashtable_EqualityWeakReference(WeakHashtable_EqualityWeakReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_EqualityWeakReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeakHashtable_EqualityWeakReference(WeakHashtable_EqualityWeakReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10305};

/// @brief Field _hashCode, offset: 0x20, size: 0x4, def value: None
 int32_t  ____hashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::WeakHashtable_EqualityWeakReference, ____hashCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::WeakHashtable_EqualityWeakReference) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WeakHashtable/WeakKeyComparer
class CORDL_TYPE WeakHashtable_WeakKeyComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr operator  ::System::Collections::IEqualityComparer*() noexcept;

static inline ::System::ComponentModel::WeakHashtable_WeakKeyComparer* New_ctor() ;

/// @brief Method System.Collections.IEqualityComparer.Equals, addr 0xad989cc, size 0x15c, virtual true, abstract: false, final true
inline bool System_Collections_IEqualityComparer_Equals(::System::Object*  x, ::System::Object*  y) ;

/// @brief Method System.Collections.IEqualityComparer.GetHashCode, addr 0xad98b28, size 0x20, virtual true, abstract: false, final true
inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object*  obj) ;

/// @brief Method .ctor, addr 0xad989c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeakHashtable_WeakKeyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_WeakKeyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WeakHashtable_WeakKeyComparer(WeakHashtable_WeakKeyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeakHashtable_WeakKeyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeakHashtable_WeakKeyComparer(WeakHashtable_WeakKeyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10304};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::WeakHashtable_WeakKeyComparer) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
