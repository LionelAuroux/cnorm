typedef struct bitmap_element_def
{
  struct bitmap_element_def *next;               
  struct bitmap_element_def *prev;               
  unsigned int indx;                     
  unsigned int  bits[2 ];  
} bitmap_element;

 
typedef struct bitmap_head_def {
  bitmap_element *first;         
  bitmap_element *current;       
  int indx;                      
} bitmap_head, *bitmap;

static void
bitmap_element_free (
     bitmap head,
     bitmap_element *elt)
{
  bitmap_element *next = elt->next;
}

int main() {
      if (next_branch->branch == insn)
        {
          enum taken status = next_branch++->status;
          if (status != NOT_TAKEN)
            {
              if (status == TAKEN)
                record_jump_equiv (insn, 1);
              else
                invalidate_skipped_block (NEXT_INSN (insn));

              prev_insn_cc0 = 0;
              prev_insn = insn;
              insn = JUMP_LABEL (insn);
              continue;
            }
        }
}

