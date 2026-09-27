#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSEvent_1)
namespace Meta::WitAi::TTS::Data {
class ITTSEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
template<typename TData>
class TTSEvent_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::TTS::Data::TTSEvent_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::TTS::Data::TTSEvent_1, "Meta.WitAi.TTS.Data", "TTSEvent`1");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Data {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSEvent`1<TData>
class CORDL_TYPE TTSEvent_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data)) TData  Data;

 __declspec(property(get=get_SampleOffset)) int32_t  SampleOffset;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) TData  data;

/// @brief Field offset, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

/// @brief Convert operator to "::Meta::WitAi::TTS::Data::ITTSEvent"
constexpr operator  ::Meta::WitAi::TTS::Data::ITTSEvent*() noexcept;

static inline ::Meta::WitAi::TTS::Data::TTSEvent_1<TData>* New_ctor() ;

constexpr TData const& __cordl_internal_get_data() const;

constexpr TData& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_data(TData  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TData get_Data() ;

/// @brief Method get_SampleOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_SampleOffset() ;

/// @brief Convert to "::Meta::WitAi::TTS::Data::ITTSEvent"
constexpr ::Meta::WitAi::TTS::Data::ITTSEvent* i___Meta__WitAi__TTS__Data__ITTSEvent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSEvent_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSEvent_1(TTSEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSEvent_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSEvent_1(TTSEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29192};

/// [JsonProperty]
/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___type;

/// [JsonProperty]
/// @brief Field offset, offset: 0x18, size: 0x4, def value: None
 int32_t  ___offset;

/// [JsonProperty]
/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 TData  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Data
