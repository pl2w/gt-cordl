#pragma once
// IWYU pragma private; include "GlobalNamespace/DeSerializationExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DeSerializationExtensions)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DeSerializationExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeSerializationExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeSerializationExtensions*, "", "DeSerializationExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeSerializationExtensions
class CORDL_TYPE DeSerializationExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1) ;

/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2) ;

/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3) ;

/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4) ;

/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4, ::by_ref<T5>  v5) ;

/// [Extension]
/// @brief Method TryDeserializeTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline bool TryDeserializeTo(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4, ::by_ref<T5>  v5, ::by_ref<T6>  v6) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4, ::by_ref<T5>  v5) ;

/// [Extension]
/// @brief Method TryDeserializeToRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline bool TryDeserializeToRef(::ArrayW<::System::Object*>  eventData, ::by_ref<T1>  v1, ::by_ref<T2>  v2, ::by_ref<T3>  v3, ::by_ref<T4>  v4, ::by_ref<T5>  v5, ::by_ref<T6>  v6) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeSerializationExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeSerializationExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeSerializationExtensions(DeSerializationExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeSerializationExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeSerializationExtensions(DeSerializationExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DeSerializationExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
