#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BufferReaderPushAdapter_1)
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class BufferReaderPushAdapter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::BufferReaderPushAdapter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::BufferReaderPushAdapter_1, "Photon.Voice", "BufferReaderPushAdapter`1");
// Dependencies Photon.Voice.BufferReaderPushAdapterBase`1<T>
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.BufferReaderPushAdapter`1<T>
class CORDL_TYPE BufferReaderPushAdapter_1 : public ::Photon::Voice::BufferReaderPushAdapterBase_1<T> {
public:
// Declarations
/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<T>  buffer;

static inline ::Photon::Voice::BufferReaderPushAdapter_1<T>* New_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<T>*  reader) ;

/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Service(::Photon::Voice::LocalVoice*  localVoice) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buffer() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<T>*  reader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferReaderPushAdapter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferReaderPushAdapter_1(BufferReaderPushAdapter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferReaderPushAdapter_1(BufferReaderPushAdapter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28492};

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
