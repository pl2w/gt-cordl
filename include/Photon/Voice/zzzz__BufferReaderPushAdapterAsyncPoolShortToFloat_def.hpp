#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapterAsyncPoolShortToFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferReaderPushAdapterAsyncPoolShortToFloat)
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace Photon::Voice {
class BufferReaderPushAdapterAsyncPoolShortToFloat;
}
// Write type traits
MARK_REF_T(::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*, "Photon.Voice", "BufferReaderPushAdapterAsyncPoolShortToFloat");
// Dependencies Photon.Voice.BufferReaderPushAdapterBase`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.BufferReaderPushAdapterAsyncPoolShortToFloat
class CORDL_TYPE BufferReaderPushAdapterAsyncPoolShortToFloat : public ::Photon::Voice::BufferReaderPushAdapterBase_1<int16_t> {
public:
// Declarations
/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<int16_t>  buffer;

static inline ::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat* New_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<int16_t>*  reader) ;

/// @brief Method Service, addr 0xa7542d0, size 0x1cc, virtual true, abstract: false, final false
inline void Service(::Photon::Voice::LocalVoice*  localVoice) ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_buffer() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<int16_t>  value) ;

/// @brief Method .ctor, addr 0xa74f7e8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<int16_t>*  reader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferReaderPushAdapterAsyncPoolShortToFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapterAsyncPoolShortToFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferReaderPushAdapterAsyncPoolShortToFloat(BufferReaderPushAdapterAsyncPoolShortToFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferReaderPushAdapterAsyncPoolShortToFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferReaderPushAdapterAsyncPoolShortToFloat(BufferReaderPushAdapterAsyncPoolShortToFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28496};

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat, ___buffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
