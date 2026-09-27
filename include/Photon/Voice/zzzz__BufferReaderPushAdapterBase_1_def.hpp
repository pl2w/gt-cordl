#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapterBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BufferReaderPushAdapterBase_1)
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace Photon::Voice {
class IServiceable;
}
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class BufferReaderPushAdapterBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::BufferReaderPushAdapterBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::BufferReaderPushAdapterBase_1, "Photon.Voice", "BufferReaderPushAdapterBase`1");
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.BufferReaderPushAdapterBase`1<T>
class CORDL_TYPE BufferReaderPushAdapterBase_1 : public ::System::Object {
public:
// Declarations
/// @brief Field reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::Photon::Voice::IDataReader_1<T>*  reader;

/// @brief Convert operator to "::Photon::Voice::IServiceable"
constexpr operator  ::Photon::Voice::IServiceable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::BufferReaderPushAdapterBase_1<T>* New_ctor(::Photon::Voice::IDataReader_1<T>*  reader) ;

/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Service(::Photon::Voice::LocalVoice*  localVoice) ;

constexpr ::Photon::Voice::IDataReader_1<T>* const& __cordl_internal_get_reader() const;

constexpr ::Photon::Voice::IDataReader_1<T>*& __cordl_internal_get_reader() ;

constexpr void __cordl_internal_set_reader(::Photon::Voice::IDataReader_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::IDataReader_1<T>*  reader) ;

/// @brief Convert to "::Photon::Voice::IServiceable"
constexpr ::Photon::Voice::IServiceable* i___Photon__Voice__IServiceable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferReaderPushAdapterBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapterBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferReaderPushAdapterBase_1(BufferReaderPushAdapterBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapterBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferReaderPushAdapterBase_1(BufferReaderPushAdapterBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28491};

/// @brief Field reader, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::IDataReader_1<T>*  ___reader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
