#pragma once
// IWYU pragma private; include "Voxels/ChunkIO.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__ChunkIO_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__ChunkDTO_def.hpp"
//  Writing Method size for method: ::Voxels::ChunkIO.PathFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Unity::Mathematics::int3)>(&::Voxels::ChunkIO::PathFor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5dac434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"PathFor", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.SaveChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::ChunkDTO)>(&::Voxels::ChunkIO::SaveChunk)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5dac55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"SaveChunk", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.TryLoadChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::int3, ::by_ref<::Voxels::ChunkDTO>)>(&::Voxels::ChunkIO::TryLoadChunk)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5dac958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"TryLoadChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::Voxels::ChunkDTO>)>(&::Voxels::ChunkIO::Save)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5dac68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.SerializeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::by_ref<::Voxels::ChunkDTO>)>(&::Voxels::ChunkIO::SerializeChunk)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5dacf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"SerializeChunk", {}, {::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.WriteChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::by_ref<::Voxels::ChunkDTO>)>(&::Voxels::ChunkIO::WriteChunk)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5dacdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"WriteChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkDTO (*)(::StringW, ::Unity::Collections::Allocator)>(&::Voxels::ChunkIO::Load)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5dacb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.TryDeserializeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<::Voxels::ChunkDTO>)>(&::Voxels::ChunkIO::TryDeserializeChunk)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5dad508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"TryDeserializeChunk", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.DeserializeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkDTO (*)(::by_ref<::ArrayW<uint8_t>>, ::Unity::Collections::Allocator)>(&::Voxels::ChunkIO::DeserializeChunk)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5dad58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"DeserializeChunk", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.ReadChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkDTO (*)(::System::IO::BinaryReader*, ::Unity::Collections::Allocator)>(&::Voxels::ChunkIO::ReadChunk)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5dad2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"ReadChunk", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.WriteNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::Unity::Collections::NativeArray_1<uint8_t>)>(&::Voxels::ChunkIO::WriteNativeArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5dad250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"WriteNativeArray", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.ReadNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::System::IO::BinaryReader*, ::Unity::Collections::Allocator)>(&::Voxels::ChunkIO::ReadNativeArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5dad85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"ReadNativeArray", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkIO.DeleteWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Voxels::ChunkIO::DeleteWorld)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5dad940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"DeleteWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::ChunkIO::setStaticF_Root(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Root", ::Voxels::ChunkIO*>(std::forward<::StringW>(value));
}
inline ::StringW Voxels::ChunkIO::getStaticF_Root()  {
return ::cordl_internals::getStaticField<::StringW, "Root", ::Voxels::ChunkIO*>();
}
inline ::StringW Voxels::ChunkIO::PathFor(::Unity::Mathematics::int3  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"PathFor", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
inline void Voxels::ChunkIO::SaveChunk(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"SaveChunk", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dto);
}
inline bool Voxels::ChunkIO::TryLoadChunk(::Unity::Mathematics::int3  id, ::by_ref<::Voxels::ChunkDTO>  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"TryLoadChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, dto);
}
inline void Voxels::ChunkIO::Save(::StringW  path, /* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, chunk);
}
inline ::ArrayW<uint8_t> Voxels::ChunkIO::SerializeChunk(/* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"SerializeChunk", {}, {::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, chunk);
}
inline void Voxels::ChunkIO::WriteChunk(::System::IO::BinaryWriter*  bw, /* [IsReadOnly] */ ::by_ref<::Voxels::ChunkDTO>  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"WriteChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bw, chunk);
}
inline ::Voxels::ChunkDTO Voxels::ChunkIO::Load(::StringW  path, ::Unity::Collections::Allocator  alloc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkDTO>(nullptr, ___internal_method, path, alloc);
}
inline bool Voxels::ChunkIO::TryDeserializeChunk(/* [IsReadOnly] */ ::by_ref<::ArrayW<uint8_t>>  data, ::by_ref<::Voxels::ChunkDTO>  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"TryDeserializeChunk", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::Voxels::ChunkDTO>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, dto);
}
inline ::Voxels::ChunkDTO Voxels::ChunkIO::DeserializeChunk(/* [IsReadOnly] */ ::by_ref<::ArrayW<uint8_t>>  data, ::Unity::Collections::Allocator  alloc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"DeserializeChunk", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkDTO>(nullptr, ___internal_method, data, alloc);
}
inline ::Voxels::ChunkDTO Voxels::ChunkIO::ReadChunk(::System::IO::BinaryReader*  br, ::Unity::Collections::Allocator  alloc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"ReadChunk", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkDTO>(nullptr, ___internal_method, br, alloc);
}
inline void Voxels::ChunkIO::WriteNativeArray(::System::IO::BinaryWriter*  bw, ::Unity::Collections::NativeArray_1<uint8_t>  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"WriteNativeArray", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bw, src);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> Voxels::ChunkIO::ReadNativeArray(::System::IO::BinaryReader*  br, ::Unity::Collections::Allocator  alloc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"ReadNativeArray", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, br, alloc);
}
inline void Voxels::ChunkIO::DeleteWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkIO*>(),
                        {"DeleteWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Voxels::ChunkIO::ChunkIO()   {
}
